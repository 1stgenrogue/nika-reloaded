    //GameVersion=v3.0.51.45
    //LastUpdated=21/11/2023
    #pragma once
    //core
    constexpr long OFF_REGION = 0x140000000;                      //[Static]->Region
    constexpr long OFF_LEVEL = 0x16966f0;                         //[Miscellaneous]->LevelName
    constexpr long OFF_LOCAL_PLAYER = 0x211fac8;                  //[Miscellaneous]->LocalPlayer
    constexpr long OFF_ENTITY_LIST = 0x1d71858;                   //[Miscellaneous]->cl_entitylist
    //buttons
    constexpr long OFF_IN_ATTACK = 0x0738af90;                     //[Buttons]->in_attack
    constexpr long OFF_IN_JUMP = 0x0738b0a0;                       //[Buttons]->in_jump
    constexpr long OFF_IN_DUCK = 0x0738b190;                       //[Buttons]->in_duck
    constexpr long OFFSET_IN_FORWARD = 0x0738b1d0;                       //[Buttons]->in_forward
    constexpr long OFFSET_TRAVERSAL_START_TIME = 0x2b30;             //[Buttons]->m_traversalStartTime
    constexpr long OFFSET_TRAVERSAL_PROGRESS = 0x2b2c;             //[Buttons]->m_traversalProgress
    constexpr long OFFSET_WALL_RUN_START_TIME = 0x3594;           //[Buttons]->m_wallRunStartTime
    constexpr long OFFSET_WALL_RUN_CLEAR_TIME = 0x3598;             //[Buttons]->m_wallRunClearTime
    // player
    constexpr long OFF_VIEW_MATRIX = 0x11a350;                    //[RecvTable.DT_Player]->ViewMatrix
    constexpr long OFF_VIEW_RENDER = 0x7389d40;                   //[RecvTable.DT_Player]->ViewRender
    constexpr long OFF_ZOOMING = 0x1c01;                          //[RecvTable.DT_Player]->m_bZooming
    constexpr long OFF_LOCAL_ORIGIN = 0x017c;                     //[DataMap.CBaseViewModel]->m_vecAbsOrigin
    constexpr long OFF_ABSVELOCITY = 0x0170;                      //[DataMap.C_BaseEntity]->m_vecAbsVelocity
    constexpr long OFF_TEAM_NUMBER = 0x037c;                      //[RecvTable.DT_BaseEntity]->m_iTeamNum
    constexpr long OFF_CURRENT_HEALTH = 0x036c;                   //[RecvTable.DT_BaseEntity]->m_iHealth
    constexpr long OFF_CURRENT_SHIELDS = 0x01a0;                  //[RecvTable.DT_BaseEntity]->m_shieldHealth
    constexpr long OFF_NAME = 0x04b9;                             //[RecvTable.DT_BaseEntity]->m_iName
    constexpr long OFF_SIGNIFIER_NAME = 0x04b0;                   //[RecvTable.DT_BaseEntity]->m_iSignifierName
    constexpr long OFF_LIFE_STATE = 0x06c8;                       //[RecvTable.DT_Player]->m_lifeState
    constexpr long OFF_BLEEDOUT_STATE = 0x2710;                   //[RecvTable.DT_Player]->m_bleedoutState
    constexpr long OFF_LAST_VISIBLE_TIME = 0x19bd + 0x3;          //[RecvTable.DT_BaseCombatCharacter]->m_hudInfo_visibilityTestAlwaysPasses + 0x3
    constexpr long OFF_LAST_AIMEDAT_TIME = 0x19bd + 0x3 + 0x8;    //[RecvTable.DT_BaseCombatCharacter]->m_hudInfo_visibilityTestAlwaysPasses + 0x3 + 0x8
    constexpr long OFF_VIEW_ANGLES = 0x2564 - 0x14;               //[DataMap.C_Player]-> m_ammoPoolCapacity - 0x14
    constexpr long OFF_PUNCH_ANGLES = 0x2468;                     //[?]->m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
    constexpr long OFFSET_BREATH_ANGLES = (OFF_VIEW_ANGLES - 0x10);
    constexpr long OFF_STUDIOHDR = 0x1020;                        //[Miscellaneous]->CBaseAnimating!m_pStudioHdr
    constexpr long OFF_BONES = 0x0dd0 + 0x48;                     //m_nForceBone
    constexpr long OFF_CAMERAORIGIN = 0x1f00;                     //[Miscellaneous]->CPlayer!camera_origin
    constexpr long OFF_MODELNAME = 0x0030;                        //m_ModelName
     
    constexpr long OFF_NAMELIST = 0xc275bf0;                      //[Miscellaneous]->NameList
    constexpr long OFF_YAW = 0x226c - 0x8;                        //m_currentFramePlayer.m_ammoPoolCount - 0x8
    constexpr long OFF_NAMEINDEX = 0x38;                          //nameIndex
    //weapon
    constexpr long OFF_WEAPON_HANDLE = 0x1964;                    //[RecvTable.DT_Player]->m_latestPrimaryWeapons
    constexpr long OFFSET_AMMO = 0x15b0;                          // m_ammoInClip
    constexpr long OFF_GRENADE_HANDLE = 0x1974;                   //[RecvTable.DT_Player]->m_latestNonOffhandWeapons
    constexpr long OFFSET_TIME_BASE = 0x20b8;                     //m_currentFramePlayer.timeBase
    constexpr long OFF_SKIN = 0x0d88;                             // m_nSkin
     
    constexpr long OFF_WEAPON_INDEX = 0x17a8;                     //[RecvTable.DT_WeaponX]->m_weaponNameIndex
    constexpr long OFF_PROJECTILESCALE = 0x04e4;                  //projectile_gravity_scale + BASE
    constexpr long OFF_PROJECTILESPEED = 0x04dc;                  //projectile_launch_speed + BASE
    //glow
    constexpr long HIGHLIGHT_TYPE_SIZE = 0x28;                  
    constexpr long OFF_GLOW_ENABLE = 0x294;                       //[DT_HighlightSettings].?
    constexpr long OFF_GLOW_THROUGH_WALL = 0x278;                 //[DT_HighlightSettings].?
    constexpr long OFF_GLOW_FIX = 0x270;
    constexpr long OFF_GLOW_HIGHLIGHT_ID = 0x298;                 //[DT_HighlightSettings].m_highlightServerActiveStates
    constexpr long OFF_GLOW_HIGHLIGHTS = 0xb5cc530;
