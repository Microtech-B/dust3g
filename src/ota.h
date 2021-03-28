

// To inject firmware info into binary file, You have to use following macro according to let
// OTAdrive to detect binary info automatically
#define ProductKey "c3faf3e0-12bf-48ad-99da-bc0a46b05ab0" // Replace with your own APIkey
#define Version "1.0.0.0"
#define MakeFirmwareInfo(k, v) "&_FirmwareInfo&k=" k "&v=" v "&FirmwareInfo_&"


void update();