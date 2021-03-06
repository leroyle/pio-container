#ifndef LORA_CREDENTIALS_H_
#define LORA_CREDENTIALS_H_
// LoRaWan Keys default dummy file
// This file was added to the repository, then we ignore any changes so 
// we do not accidentally commit creds to repository
// git command to ignore further changes:
//    git update-index --skip-worktree loraCredentials.h

// uint8_t nodeDeviceEUI[8] = {0xC1, 0xC7, 0x01, 0xEC, 0xD8, 0x46, 0xA2, 0x99};
// uint8_t nodeAppEUI[8] = {0x5D, 0x53, 0x67, 0x82, 0xD4, 0x95, 0x5E, 0x8C};
// uint8_t nodeAppKey[16] = {0x88, 0x6F, 0x14, 0xB0, 0xE1, 0xE8, 0x2F, 0x57, 0xF7, 0x53, 0x2F, 0x61, 0xDF, 0xF1, 0xDB, 0x3C};

// BAD uint8_t nodeDeviceEUI[8] = {0x14, 0x80, 0x24, 0xB8, 0xD3, 0x03, 0xB4, 0xFD};

//#define PROD_CONSOLE
// uint8_t nodeDeviceEUI[8] = {0x60, 0x81, 0xF9, 0x72, 0xA8, 0xCA, 0xFD, 0xC5};
// uint8_t nodeAppEUI[8] = {0x60, 0x81, 0xF9, 0x3C, 0xEC, 0xED, 0x57, 0x8C};
// uint8_t nodeAppKey[16] = {0x82, 0x3A, 0x82, 0xD3, 0x52, 0x59, 0x3D, 0x8E, 0x29, 0x9B, 0x96, 0x5F, 0x77, 0xB7, 0x23, 0x48};

//  DevEui=0xC8, 0x35. 0xD2, 0x02. 0x26. 0xEB, 0x5D, 0xB5
// 10:38:56.063 -> DevAdd=00000000
// 10:38:56.063 -> AppEui=0x5C, 0xE6, 0x6B, 0x92, 0xBA, 0x1E, 0x87, 0x57
// 10:38:56.063 -> AppKey=, 0x05, 0xCA, 0x35, 0x12, 0xC2, 0x28, 0x75, 0x3D, 0xBF, 0xD2, 0x17, 0x00, 0x20, 0xD4, 0x5B, 0xB6

// #define LAL
// #ifdef LAL
//#define PROD_CONSOLE
#ifdef PROD_CONSOLE
#if defined HHH_DEMO | defined LORA_NOT_AVAILABLE
uint8_t nodeDeviceEUI[8] = {0x42, 0x80, 0x24, 0xB8, 0xD3, 0x03, 0xB4, 0xFD};
#else
uint8_t nodeDeviceEUI[8] = {0x24, 0x80, 0x24, 0xB8, 0xD3, 0x03, 0xB4, 0xFD};
#endif

uint8_t nodeAppEUI[8] = {0x95, 0x61, 0x2A, 0x1C, 0x27, 0x22, 0xEE, 0x26};
uint8_t nodeAppKey[16] = {0x88, 0x19, 0x97, 0xC6, 0x18, 0xEA, 0x8C, 0xAA, 0xD5, 0x16, 0xDA, 0x69, 0x4F, 0x07, 0xC0, 0x09};
#else
//Staging
// 9467C7FEC7FCE293
uint8_t nodeDeviceEUI[8] = {0x94, 0x67, 0xC7, 0xFE, 0xC7, 0xFC, 0xE2, 0x93};
// B7E3ECEC3CCFAC0F
uint8_t nodeAppEUI[8] = {0xB7, 0xE3, 0xEC, 0xEC, 0x3C, 0xCF, 0xAC, 0x0F};
//  A8454E436FCAA1366A1D737C45763DF3 
uint8_t nodeAppKey[16] = {0xA8, 0x45, 0x4E, 0x43, 0x6F, 0xCA, 0xA1, 0x36, 0x6A, 0x1D, 0x73, 0x7C, 0x45, 0x76, 0x3D, 0xF3};
#endif
// #endif // LAL
#endif
