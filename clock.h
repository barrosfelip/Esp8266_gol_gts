#include <NTPClient.h>

const long utcOffsetInSeconds = -10800; // UTC-3 para horário de Brasília

const char *ntpServer = "pool.ntp.org";
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, ntpServer, utcOffsetInSeconds);

int h = 0,m = 0, s=0;
static uint32_t last_time, now = 0; // RTC
char timeStamp[15];

void atualizaHora(){
timeClient.begin();
timeClient.update();
h = timeClient.getHours();
m = timeClient.getMinutes();
s = timeClient.getSeconds();
}

void carregaHora(){
now=millis();
if (( now-last_time)>=1000 ) {
  last_time=last_time+1000; 
  s=s+1; 
  if(s==60){
    s=0;
    m=m+1;
  }
  if(m==60) {
  m=0;
  h=h+1;
  }
  if(h==24){
  h=0;
  } 
}

sprintf (timeStamp ,"%d:%.2d", h, m);
}