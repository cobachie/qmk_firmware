#include "gary.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     ESC , 1  , 2  , 3  , 4  , 5  ,                6  , 7  , 8  , 9  , 0  ,BSPC,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     TAB , Q  , W  , E  , R  , T  ,                Y  , U  , I  , O  , P  ,DEL ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     RASE, A  , S  , D  , F  , G  ,                H  , J  , K  , L  ,SCLN,QUOT,
  //|----+----+----+----   +----+----+----.    ,----|----+----+----+----+----+----|
     LSFT, Z  , X  , C  , V  , B  ,NEXT,     FULL , N  , M  ,COMM,DOT ,SLSH,SFTENT,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                       LGUI,LOWR,SPC ,        GARY, ENT,LALT
  //                  `----+----+----'        `----+----+----'
  ),


  [_LOWER] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
    GRV ,EXLM, AT ,HASH,DLR ,PERC,                CIRC,AMPR,ASTR,LPRN,RPRN,BSPC,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     CLTB,    ,CNTR,UPLF,UPRG,    ,                   ,    ,PLUS,LBRC,RBRC,OPASS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,LHLF,RHLF,DNLF,DNRG,    ,                   ,    ,MINS,    ,    ,PIPE,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|`
         ,    ,    ,CTLC,    ,    ,    ,         ,    ,    ,    ,EQL ,    ,UNDS ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,DEL ,        BSPC ,    ,
  //                  `----+----+----'        `----+----+----'
  ),

  [_RAISE] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     TILD, F1 , F2 , F3 ,SHOT, F5 ,                F6 , F7 , F8 , F9 ,F10 ,F11 ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,MPRV,MPLY,MNXT,    ,    ,                   ,PGUP, UP ,PGDN,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,    ,VOLD,VOLU,MUTE,    ,                   ,LEFT,DOWN,RGHT,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,    ,      RST,    ,    ,    ,    ,    ,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                            ,LALT,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
  ),
};