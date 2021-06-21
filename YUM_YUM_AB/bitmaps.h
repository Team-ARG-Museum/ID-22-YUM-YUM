#ifndef BITMAPS_H
#define BITMAPS_H


///////////////// Menu bitmaps ////////////////////
///////////////////////////////////////////////////

const unsigned char PROGMEM TEAMarg[] = //128,48
{
  //         ########                                                                                       ########
  //         ###########                                                                                   ##      ##
  //         ####    ##################                                                                   ##  #### ###
  //         #### ##    ################ ####################           #############         ######     ##  ##  # ####
  //         #### #####                #######################       ##################      ########   ##  ###  # #####
  //         #### ##  ######  ######## ##                   ###     ####            ####     ##     ## ##  ####### #  ###
  // ####### ####  #  ####### #####  #  # #################  ##    ###   ##########   ###   ##  ###  ###  ###  ### #   ### ##########
  //         ##### ##########  ####  ## #  ################# ##   ###  ##############   ##  ## #####  #  ###    ## ##  ###
  //         ##### ########### ######## #   ################  #   ##  #################  ####  ######   ####    ## ########
  // ##### # #####             ########     ################# #  ##  #######    ######## #### ######## ######  ### ########  # # ####
  // #  #    ###### ####################    ################# #  ## #######      #######  ##  #################### ########      #  #
  // #  # #  ###### ####################     #######          # ##  ######       ####  ## ## #################  ## ######## # #  #  #
  // ####    ######  #  ################     ##############   # ## #######       ####  ## #  #################  ## ########      ####
  // ####  # ####### #  #################  # ##############   ###  ######       ######### # ###################### ########  # # ####
  // ####    ####### ####################  # ###############  ### #######       ########    #####################  ########      ####
  // #### #   ######        #########      # ###############  ##  ######       #########   ###################### ######### # #  ####
  // ####     #####          ########     ##  ############## ### ######################    ###################### #########     #####
  // ##### #  #####          #########    ### ########        #  ######################   ####################### ########   #  #####
  // #####     ###            ########    ### ###############   ######################    ####################### ########      #####
  // ###### #  ###         #  #########  #### ################  #######      #########   ######## ############### ########  # # #####
  // ######    ##          #   ########  ####  ################  ######      ########    #######  ############### ########      #####
  // ####### #  #         ###  ######### ##### ################# #####       ########   ########   ###### ####### ######## # # ######
  // #######    #         ###   ########  #### #  ############## #####      ########    #######    #####  ####### ########     ######
  // ######## # ######## #####  ##  ##### #### #  ########                  ###  ###    #######     ###   ######  ########  #  ######
  // ########          # #####   #  ##### #### #####             #         ####  ##                 ##    ###  # #########     ######
  // #  ###### # # # # ########  #####    ####                ## #         ########           ##          ###  # ######### # # ###  #
  // #  ######          #######           ####                ## #     ###                     #            #### #########     ###  #
  // ########## # # # # #########         # ##                   #     ###             ##      ##             ## #########  # #######
  //                    ########         ## ##                   #    ####             ##       #                ########
  //         ###         #######         #  ##              ######    ####            ####      ##  #    #       ########
  // ######### ######    ######         ##   #       #####################            # ##       #  ##  ####      #######   #########
  //       ##   ##       ######         #    ################            ############## ######################     ######
  //      ##     ##   ## #####         ## ## #########                   ############    #######################    #####
  //     ## ##    ##  ##  ####         #  ##                                                  ##     #############   #### ##
  //     #  ##     #      ###         ##          ########    ##########      #########       ##     ##### #########  ### ##
  //     ##       ##      ###     #####          ##########   ###########    ###########           ######      ##########
  //      ##   # ##       #############         ############  ############   ###########          ####            #######   ###
  //       ##   ##   ###  ########  ####        ############  #####  #####  #####   ####       ## ####    ###               # #
  //        ## ##    # #            ####        #####   ####  #####   ####  ####               ##  ##     # #               ###
  //         ###     ###             ##         #####   ####  #####   ###   ####   ######                 ###
  //                                            ############  ##########    #####  ######
  //                                            ###########      ########      ########
  //                                            ########### #### ## ##### #### ######## ####
  //                                            #####   ### #  # ##  #### #  # ######## #  #
  //                                            #####   ### #### ##   ### #### ######## ####
  //
  //
  //
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x3B, 0xFB, 0x93, 0x96, 0xF6, 0xE6, 0xEC, 0xEC, 0xEC, 0xEC, 0xCC, 0x0C, 0x6C, 0xEC, 0xEC, 0xEC, 0xEC, 0x2C, 0x2C, 0xEC, 0x8C, 0x38, 0xF0, 0x18, 0x58, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0x98, 0x38, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x30, 0xB0, 0x98, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0x98, 0xB8, 0x30, 0x70, 0x60, 0xC0, 0x80, 0x00, 0x00, 0xC0, 0xF0, 0x38, 0x98, 0xD8, 0xD8, 0xD8, 0x98, 0x30, 0x60, 0xC0, 0x60, 0x30, 0x98, 0xCC, 0xE6, 0x73, 0x39, 0x3D, 0x65, 0xE5, 0xFD, 0x01, 0xFF, 0x9E, 0x1C, 0x38, 0xF0, 0xE0, 0xC0, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0xFE, 0xF2, 0xF2, 0xFE, 0x02, 0x88, 0x22, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xE1, 0x0D, 0x7D, 0x4D, 0x4D, 0x7D, 0x7D, 0x7D, 0x7D, 0xFD, 0xFD, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7C, 0x61, 0x00, 0x00, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xC7, 0x06, 0x00, 0xFF, 0xE0, 0x78, 0x1E, 0xC7, 0xF1, 0xFC, 0xFE, 0xFF, 0xFF, 0x7F, 0x1F, 0x07, 0x03, 0x01, 0x01, 0x01, 0x81, 0xE3, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xFE, 0x38, 0x03, 0x3F, 0x8F, 0xE3, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xE4, 0xE6, 0xFF, 0x3F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x88, 0x22, 0x88, 0x22, 0x00, 0xFE, 0xF2, 0xF2, 0xFE,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0xE2, 0x88, 0x20, 0x83, 0x1F, 0xFF, 0x8F, 0x83, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0xE0, 0xF8, 0xE0, 0x83, 0x0F, 0x3F, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFE, 0xF8, 0xE0, 0x80, 0x38, 0xFF, 0xFF, 0xFE, 0xE0, 0x0F, 0xFF, 0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFD, 0xFD, 0xFD, 0x7D, 0x7D, 0x7C, 0x79, 0x73, 0x61, 0x0C, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x1F, 0x07, 0x07, 0x07, 0x07, 0x07, 0xC7, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0x03, 0x00, 0xE0, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0x07, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x20, 0x88, 0x22, 0x08, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x4F, 0x49, 0x49, 0x4F, 0x4F, 0x4F, 0xCF, 0xCF, 0x6E, 0x28, 0x62, 0xC8, 0xC2, 0x48, 0x42, 0x48, 0x02, 0x08, 0x03, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x38, 0x08, 0x03, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0xC1, 0x70, 0x1F, 0x07, 0x3F, 0xFF, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0x60, 0x66, 0x66, 0x60, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x70, 0x7C, 0x7C, 0xFC, 0x80, 0x83, 0x83, 0x83, 0x83, 0x82, 0x82, 0x83, 0x83, 0x80, 0x80, 0x80, 0xE0, 0x38, 0xF8, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x82, 0x8E, 0xB8, 0xE0, 0x80, 0x80, 0xE1, 0xC1, 0x80, 0x80, 0xC0, 0xE0, 0xC3, 0xC3, 0x87, 0x84, 0x0C, 0x0F, 0x00, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x02, 0x48, 0x42, 0x48, 0x4F, 0x4F, 0x4F, 0x49, 0x49, 0x4F,
  0x00, 0x00, 0x00, 0x00, 0x0E, 0x1B, 0x31, 0x66, 0xC6, 0x80, 0xD0, 0x60, 0x31, 0x1B, 0x0E, 0x00, 0xE0, 0xA3, 0xE3, 0x00, 0x01, 0x3F, 0x3F, 0x3F, 0x33, 0x30, 0x30, 0x30, 0x30, 0x18, 0x18, 0x78, 0xF8, 0xFC, 0x67, 0x01, 0x00, 0x03, 0x03, 0x00, 0x01, 0x01, 0x01, 0xF1, 0xF9, 0xFD, 0xFD, 0xFD, 0x3D, 0x3C, 0x3C, 0xFC, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0x1C, 0x3C, 0xFC, 0xFC, 0xF8, 0x71, 0x01, 0x01, 0xE1, 0xF9, 0xFD, 0xFD, 0x3D, 0x1D, 0x1D, 0x9D, 0xBD, 0xBC, 0xBC, 0xB8, 0x80, 0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x67, 0x61, 0x01, 0x31, 0x79, 0x79, 0x3F, 0x0F, 0x0F, 0x0F, 0x07, 0xE3, 0xA7, 0xE7, 0x07, 0x07, 0x0F, 0x0E, 0x0E, 0x1C, 0x1C, 0x19, 0x1B, 0x1F, 0x1F, 0x1F, 0x00, 0x06, 0x06, 0x70, 0x50, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x07, 0x07, 0x07, 0x1F, 0x1F, 0x1F, 0x01, 0x1C, 0x14, 0x15, 0x1D, 0x01, 0x1F, 0x1F, 0x03, 0x07, 0x0F, 0x1F, 0x1F, 0x1E, 0x00, 0x1C, 0x14, 0x15, 0x1D, 0x01, 0x1F, 0x1F, 0x1E, 0x1E, 0x1F, 0x1F, 0x1F, 0x1F, 0x01, 0x1D, 0x14, 0x14, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
PROGMEM const unsigned char titleScreen[] = {
// width, height 128, 64,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xE0, 0x70, 0x70, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x70, 0x70, 0xE0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0xA0, 0x50, 0xA8, 0x54, 0xAA, 0x54, 0xAA, 0x55, 0xAA, 0x55, 0x2A, 0x55, 0x2A, 0x55, 0x2A, 0x55, 0x2A, 0x55, 0x2A, 0x55, 0x2A, 0x05, 0x00, 0x00, 0x00, 0x40, 0xA8, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x54, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFF, 0x7F, 0xFF, 0x40, 0x00, 0x00, 0x00, 0x3C, 0x86, 0x13, 0xC1, 0x13, 0xC5, 0x0A, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x3E, 0xC3, 0xCF, 0x3E, 0x00, 0x00, 0x00, 0x06, 0xFF, 0x06, 0xFF, 0xF1, 0xFF, 0x80, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x8A, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x50, 0xA8, 0x54, 0xAA, 0x55, 0xAA, 0x15, 0x8A, 0x15, 0x0A, 0x05, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0xFF, 0x3F, 0xFF, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0xFF, 0x1F, 0xFF, 0xF8, 0x07, 0x00, 0x00, 0x00, 0x03, 0x1F, 0xFF, 0xFF, 0x7E, 0x1E, 0xDF, 0xDF, 0x00, 0x00, 0x00, 0xFF, 0x01, 0xFF, 0xFF, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xA0, 0x50, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x41, 0x80, 0x41, 0x80, 0x41, 0x80, 0x41, 0x80, 0x41, 0x80, 0x41, 0x00, 0x01, 0x00, 0x01, 0x80, 0x41, 0xA0, 0x51, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xC0, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xFC, 0xFC, 0xFC, 0x38, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xDC, 0xDC, 0xDC, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x82, 0x85, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x95, 0x8A, 0x85, 0x82, 0x80, 0x80, 0x80, 0x88, 0x95, 0x8A, 0x95, 0x8A, 0x15, 0x0A, 0x05, 0x0A, 0x05, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x9F, 0x80, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9F, 0x9F, 0x8F, 0x87, 0x80, 0x80, 0x9F, 0x9F, 0x9F, 0x9F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x9F, 0x9F, 0x9F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x07, 0x04, 0x04, 0xFC, 0x80, 0xFC, 0x04, 0x04, 0xFF, 0x80, 0x94, 0x94, 0x94, 0x9C, 0xFF, 0x80, 0xEC, 0xEC, 0xEC, 0x80, 0xFF, 0x80, 0x80, 0xFE, 0x11, 0xFE, 0x80, 0x80, 0xFF, 0x00, 0xFE, 0x82, 0xDA, 0xDA, 0x82, 0xFE, 0xA0, 0xFE, 0x82, 0xDA, 0xDA, 0xA2, 0xFE, 0xA0, 0xFE, 0x82, 0xBA, 0xAA, 0x8A, 0xFE, 0xA0, 0xE0, 0x00, 0xFF, 0x80, 0x80, 0x9C, 0x94, 0x84, 0xFF, 0x80, 0xEC, 0xEC, 0xEC, 0x80, 0xFF, 0x80, 0x80, 0xFE, 0x11, 0xFE, 0x80, 0x80, 0xFF, 0x80, 0x94, 0x94, 0x94, 0x9C, 0xFF, 0x90, 0x94, 0x94, 0x94, 0x84, 0xFF, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x07, 0x0E, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x0E, 0x07, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


PROGMEM const unsigned char info[] = {
// width, height 96, 24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x41, 0x5D, 0x55, 0x57, 0x7F, 0x41, 0x6D, 0x6D, 0x51, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x05, 0x7D, 0x41, 0x7D, 0x05, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x3E, 0x00, 0x7F, 0x41, 0x5D, 0x55, 0x49, 0x7F, 0x11, 0x77, 0x47, 0x71, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x00, 0x7F, 0x41, 0x75, 0x15, 0x1D, 0x7F, 0x41, 0x7F, 0x51, 0x55, 0x55, 0x45, 0x7F, 0x41, 0x77, 0x77, 0x41, 0x7F, 0x00, 0x7F, 0x41, 0x5D, 0x55, 0x57, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x5F, 0x50, 0x50, 0x7F, 0x41, 0x5F, 0x50, 0x50, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x3E, 0x00, 0x7F, 0x41, 0x5F, 0x68, 0x5F, 0x41, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x3E, 0x00, 0x7F, 0x41, 0x7D, 0x13, 0x7D, 0x41, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x11, 0x77, 0x47, 0x71, 0x1F, 0x00, 0x7F, 0x41, 0x7D, 0x13, 0x7D, 0x41, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x11, 0x77, 0x47, 0x71, 0x1F, 0x00, 0x7F, 0x41, 0x5D, 0x5D, 0x41, 0x7F, 0x05, 0x7D, 0x41, 0x7D, 0x05, 0x7F, 0x41, 0x77, 0x77, 0x41, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x6D, 0x6D, 0x51, 0x7F, 0x51, 0x55, 0x55, 0x45, 0x7F
};


PROGMEM const unsigned char menuText[] = {
// width, height
20, 8,
// HELP
0x7F, 0x41, 0x77, 0x77, 0x41, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x5F, 0x5F, 0x7F, 0x41, 0x75, 0x75, 0x71, 0x7F, 
// PLAY
0x7F, 0x41, 0x75, 0x75, 0x71, 0x7F, 0x41, 0x5F, 0x5F, 0x7F, 0x41, 0x75, 0x75, 0x41, 0x7F, 0x71, 0x77, 0x47, 0x71, 0x7F, 
// INFO
0x7F, 0x5D, 0x41, 0x5D, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x41, 0x75, 0x75, 0x7D, 0x7F, 0x41, 0x5D, 0x5D, 0x41, 0x7F, 
// CONF
0x7F, 0x41, 0x5D, 0x5D, 0x5D, 0x7F, 0x41, 0x5D, 0x5D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x41, 0x75, 0x75, 0x7F, 
// SFX
0x7F, 0x51, 0x55, 0x55, 0x45, 0x7F, 0x41, 0x75, 0x75, 0x7D, 0x7F, 0x49, 0x77, 0x77, 0x49, 0x7F, 0x00, 0x00, 0x00, 0x00, 
// OFF
0x7F, 0x41, 0x5D, 0x5D, 0x41, 0x7F, 0x41, 0x75, 0x75, 0x7D, 0x7F, 0x41, 0x75, 0x75, 0x7D, 0x7F, 0x00, 0x00, 0x00, 0x00, 
// ON
0x7F, 0x41, 0x5D, 0x5D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};



//////// TILES bitmaps ////////////////////
///////////////////////////////////////////

PROGMEM const unsigned char wallTiles_plus_mask[] = {
// width, height
21, 16,

//  TILE O
//  ===
//  ===
//  ===
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x80, 0xE0, 0xE0, 0xF8, 0xF8, 0xFE, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 
0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0x7E, 0x7F, 0x1E, 0x1F, 0x06, 0x07, 0x00, 0x01, 

//  TILE 1
//  ===
//  =##
//  ===
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x80, 0xF8, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x90, 
0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x10, 0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0xE0, 0xFC, 0x00, 0xFC, 
0x00, 0x80, 0x00, 0xE0, 0x00, 0xF8, 0x00, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 
0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xFF, 0x1F, 0x7F, 0x07, 0x1F, 0x01, 0x07, 0x00, 0x01, 

//  TILE 2
//  ===
//  ###
//  ===
0x80, 0x80, 0x80, 0xC0, 0x90, 0xF0, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x90, 
0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x10, 0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0xE0, 0xFC, 0x00, 0xFC, 
0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 
0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xFF, 0x1F, 0x7F, 0x07, 0x1F, 0x01, 0x07, 0x00, 0x01, 

//  TILE 3
//  ===
//  ##=
//  ===
0x80, 0x80, 0x80, 0xC0, 0x90, 0xF0, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x90, 
0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0x08, 0xFC, 0xE0, 0xFC, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 
0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xFF, 0x03, 0xFF, 0x00, 0x7F, 0x00, 0x1F, 0x00, 0x07, 0x00, 0x01, 

//  TILE 4
//  ===
//  =#=
//  =#=
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xE0, 0x40, 0xF8, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 
0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0x88, 0xFC, 0x00, 0xFC, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x00, 0xE0, 0x00, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 
0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0x7E, 0xFF, 0x1F, 0xFF, 0x00, 0xFF, 0x00, 0x7F, 0x00, 0x1F, 0x00, 0x07, 0x00, 0x01, 

//  TILE 5
//  =#=
//  =#=
//  =#=
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xE0, 0x40, 0xF8, 0xA8, 0xFE, 0x54, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x55, 
0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0x8A, 0xFF, 0xE5, 0xFF, 0xF8, 0xFF, 0x7E, 0xFF, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x00, 0xE0, 0x00, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 
0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0x7F, 0xFF, 0x1F, 0xFF, 0x07, 0xFF, 0x01, 0x7F, 0x00, 0x1F, 0x00, 0x07, 0x00, 0x01, 

//  TILE 6
//  =#=
//  =#=
//  ===
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x80, 0xF8, 0xA8, 0xFE, 0x94, 0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0xAA, 0xFF, 0x95, 
0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0x0A, 0xFF, 0xE5, 0xFF, 0xF8, 0xFF, 0x7E, 0xFF, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x00, 0xE0, 0x00, 0xF8, 0x00, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 
0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xFF, 0x07, 0xFF, 0x01, 0x7F, 0x00, 0x1F, 0x00, 0x07, 0x00, 0x01, 

//  TILE 7
//  ===
//  =##
//  =#=
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xE0, 0x40, 0xF8, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 
0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0x28, 0xFC, 0x90, 0xFC, 0x00, 0xFC, 0x00, 0x00, 
0x00, 0x80, 0x00, 0xE0, 0x00, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 
0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0x00, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x7F, 0x07, 0x1F, 0x00, 0x07, 0x00, 0x01, 

//  TILE 8
//  =#=
//  ##=
//  ===
0x80, 0x80, 0xA0, 0xE0, 0x90, 0xF8, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFE, 0x94, 0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0xAA, 0xFF, 0x95, 
0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0x0A, 0xFF, 0xE5, 0xFF, 0xF8, 0xFF, 0x7E, 0xFF, 0x00, 0x00, 0x00, 0x00, 
0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 
0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xFF, 0x07, 0xFF, 0x01, 0x7F, 0x00, 0x1F, 0x00, 0x07, 0x00, 0x01, 

//  TILE 9
//  ===
//  ##=
//  =#=
0x80, 0x80, 0xA0, 0xE0, 0x10, 0xF8, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 
0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0x88, 0xFC, 0x00, 0xFC, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 
0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0x7E, 0xFF, 0x1F, 0xFF, 0x00, 0xFF, 0x00, 0x7F, 0x00, 0x1F, 0x00, 0x07, 0x00, 0x01, 

//  TILE 10
//  =#=
//  =##
//  ===
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x80, 0xF8, 0xA8, 0xFE, 0x94, 0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0xAA, 0xFF, 0x95, 
0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0x28, 0xFF, 0x92, 0xFF, 0x00, 0xFC, 0x00, 0x00, 
0x00, 0x80, 0x00, 0xE0, 0x00, 0xF8, 0x00, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 
0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x7F, 0x07, 0x1F, 0x00, 0x07, 0x00, 0x01, 

//  TILE 11
//  =#=
//  ###
//  =#=
0x80, 0x80, 0xA0, 0xE0, 0x10, 0xF8, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFE, 0x54, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x55, 
0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0x28, 0xFF, 0x92, 0xFF, 0x00, 0xFC, 0x00, 0x00, 
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 
0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0x00, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x7F, 0x07, 0x1F, 0x00, 0x07, 0x00, 0x01, 

//  TILE 12
//  =#=
//  ###
//  ===
0x80, 0x80, 0xA0, 0xE0, 0x90, 0xF8, 0xA8, 0xFC, 0x90, 0xFC, 0xA8, 0xFE, 0x94, 0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0xAA, 0xFF, 0x95, 
0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0x28, 0xFF, 0x92, 0xFF, 0x00, 0xFC, 0x00, 0x00, 
0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 
0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x7F, 0x07, 0x1F, 0x00, 0x07, 0x00, 0x01, 

//  TILE 13
//  =#=
//  =##
//  =#=
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xE0, 0x40, 0xF8, 0xA8, 0xFE, 0x54, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x55, 
0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x95, 0xFF, 0x28, 0xFF, 0x92, 0xFF, 0x00, 0xFC, 0x00, 0x00, 
0x00, 0x80, 0x00, 0xE0, 0x00, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 
0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0x00, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x7F, 0x07, 0x1F, 0x00, 0x07, 0x00, 0x01, 

//  TILE 14
//  ===
//  ###
//  =#=
0x80, 0x80, 0xA0, 0xE0, 0x10, 0xF8, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 
0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFC, 0x90, 0xFC, 0x28, 0xFC, 0x90, 0xFC, 0x00, 0xFC, 0x00, 0x00, 
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 
0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0x00, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x7F, 0x07, 0x1F, 0x00, 0x07, 0x00, 0x01, 

//  TILE 15
//  =#=
//  ##=
//  =#=
0x80, 0x80, 0xA0, 0xE0, 0x10, 0xF8, 0xA8, 0xFC, 0x50, 0xFC, 0xA8, 0xFE, 0x54, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x55, 
0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0x8A, 0xFF, 0xE5, 0xFF, 0xF8, 0xFF, 0x7E, 0xFF, 0x00, 0x00, 0x00, 0x00, 
0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 
0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0x00, 0xFF, 0x1F, 0xFF, 0x07, 0xFF, 0x01, 0x7F, 0x00, 0x1F, 0x00, 0x07, 0x00, 0x01, 
};



//////// MAP bitmaps //////////////////////
///////////////////////////////////////////
const unsigned char PROGMEM tilemap00[] =
{
  0,  5,  0,  5,  0,  5,  0, 10,  2,  8,
  0, 10,  2,  8,  0,  5,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  5,  0,  7,  2,  9,
  0,  1, 14,  3,  0,  6,  0, 10,  2,  8,
  0,  0,  5,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  6,  0,  1,  3,  0,  7,  3,  0,
  0,  0,  0,  0,  0,  0,  0,  5,  0,  0,
  0,  2,  2,  3,  0,  4,  0,  6,  0,  1,
  0,  0,  0,  0,  0,  5,  0,  0,  0,  0,
};

#endif
