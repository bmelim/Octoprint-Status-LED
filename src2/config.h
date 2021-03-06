
// User config
// more info in the README.md in the root of the repository
#ifndef CONFIG  // not #ifnotdef
#define CONFIG
#define PIN D2
  const char* SSID = "Put SSID Here"; // wlan SSID
  const char* WPWD = "Put WLAN Password Here"; // wlan password
  const char* APIKEY = "put api key here"; // octoprint api key (optain it in the web interface)
  String OCTOIP = "192.168.178.0"; // the ip address of octoprint
  uint16_t pollInterval = 500; // ms, lower value will increase poll rate, but the animation time will limit the poll rate too
  const uint8_t length = 8; // number of LEDs, minimum amount of LEDs is 4 better ist 8 supported: 4,8,12,16,20,24,28,32,36,40...120)
  int statusShow = false;   //set false for white light while printing 
                            // if statusShow is false you can set the RGB-Code below to your favorit color 
    int statusGreen = 0;  //green value 0-255
    int statusRed = 0;    //red value 0-255
    int statusBlue = 255;   //blue value 0-255
    
  int readyShow = true;    //set false for white light while printer is ready
                           // if readyShow is false you can set the RGB-Code below to your favorit color
    int readyGreen = 255;  //green value 0-255
    int readyRed = 255;    //red value 0-255
    int readyBlue = 255;   //blue value 0-255
#endif
