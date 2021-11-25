#pragma once

//UPDATED 11/2/2021

#define OFFSET_ENTITYLIST 0x194cb58 
#define OFFSET_LOCAL_ENT 0x1cfbdb8 
#define OFFSET_HEALTH 0x0438 
#define OFFSET_SHIELD 0x0170 
#define OFFSET_SHIELD_MAX 0x0174
#define OFFSET_ORIGIN 0x014C 
#define OFFSET_BONES 0xF38
#define OFFSET_MATRIX 0x1b3bd0
#define OFFSET_RENDER 0x74e7b28	
#define OFFSET_NameList 0xb9c9360 
#define OFFSET_NAME	0x0589 
#define OFFSET_VIEWANGLES 0x2568 
#define OFFSET_BREATH_ANGLES (OFFSET_VIEWANGLES - 0x10)
#define OFFSET_CAMERAPOS 0x1f20
#define OFFSET_TEAM	0x0448 
#define OFFSET_BLEED_OUT_STATE 0x2718 
#define OFFSET_VISIBLE_TIME 0x1af4 
#define OFFSET_MODELNAME 0x1850
#define OFFSET_ITEM_ID	0x1698 
#define OFFSET_AIMPUNCH	0x2480
#define OFFSET_CURRENT_WEAPON 0x1a8c //m_latestPrimaryWeapons
#define OFFSET_BULLET_SPEED	0x1ef0
#define OFFSET_BULLET_SCALE 0x1ef8
#define OFFSET_BULLET_GRAVITY (OFFSET_BULLET_SPEED + 0x8)

#define GLOW_FADE 0x388
#define GLOW_DISTANCE 0x3B4
#define GLOW_CONTEXT 0x3C8
#define GLOW_LIFE_TIME 0x3A4
#define GLOW_VISIBLE_TYPE 0x3D0
#define GLOW_TYPE 0x2C4
#define GLOW_COLOR 0x1D0
#define GLOW_COLOR2 0x1D4 // GLOW_COLOR + 0x4
#define GLOW_COLOR3 0x1D8 // GLOW_COLOR + 0x8