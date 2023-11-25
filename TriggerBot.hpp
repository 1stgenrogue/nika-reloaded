#pragma once
struct TriggerBot {
    ConfigLoader* cl;
    MyDisplay* display;
    LocalPlayer* localPlayer;
    std::vector<Player*>* players;
    const float TB_MAX_RANGE_ZOOMED = util::metersToGameUnits(180);
    const float TB_MAX_RANGE_HIPFRE = util::metersToGameUnits(12);

    TriggerBot(ConfigLoader* cl, MyDisplay* display, LocalPlayer* localPlayer, std::vector<Player*>* players) {
        this->cl = cl;
        this->display = display;
        this->localPlayer = localPlayer;
        this->players = players;
    }

    void shootAtEnemy(int counter) {
        if (!cl->FEATURE_TRIGGERBOT_ON) return;
        if (!localPlayer->isCombatReady()) return;

        //only these weapons will work with trigger bot
        int weaponId = localPlayer->weaponIndex;
        //printf("Last weapon held: [%s] - id: [%d]- SemiAuto: [%d] - Ammo: [%d]\n", WeaponName(weaponId).c_str(), weaponId, localPlayer->weaponSemiAuto, localPlayer->ammoInClip);        
        if (
            weaponId != WEAPON_KRABER &&
            weaponId != WEAPON_P2020 &&
            weaponId != WEAPON_MOZAMBIQUE &&
            weaponId != WEAPON_EVA8 &&
            weaponId != WEAPON_PEACEKEEPER &&
            weaponId != WEAPON_MASTIFF &&
            weaponId != WEAPON_WINGMAN &&
            weaponId != WEAPON_LONGBOW &&
            weaponId != WEAPON_SENTINEL &&
            weaponId != WEAPON_G7 &&
            weaponId != WEAPON_HEMLOCK &&
            weaponId != WEAPON_3030 &&
            weaponId != WEAPON_TRIPLE_TAKE &&
            weaponId != WEAPON_BOCEK &&
            weaponId != WEAPON_PROWLER &&
            weaponId != WEAPON_NEMESIS
            )return;

        //max range changes based on if we are zoomed in or not
        const float RANGE_MAX = (localPlayer->inZoom) ? TB_MAX_RANGE_ZOOMED : TB_MAX_RANGE_HIPFRE;

        for (int i = 0; i < players->size(); i++) {
            Player* player = players->at(i);
            if (!player->isCombatReady()) continue;
            if (!player->enemy) continue;
            if (!player->aimedAt) continue;
            if (player->distanceToLocalPlayer <= RANGE_MAX ) {
                display->mouseClickLeft();
                break;
            }
        }
    }
};
