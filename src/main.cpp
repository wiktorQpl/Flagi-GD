#include <Geode/Geode.hpp>
#include <Geode/modify/SimplePlayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayer, SimplePlayer) {
    void updatePlayerFrame() {
        SimplePlayer::updatePlayerFrame();

        auto selectedFlag = Mod::get()->getSettingValue<std::string>("selected-flag");

        if (selectedFlag == "Polska") {
            this->setPrimaryColor({255, 255, 255});
            this->setSecondaryColor({214, 40, 40});
        } 
        else if (selectedFlag == "Ukraina") {
            this->setPrimaryColor({0, 91, 187});
            this->setSecondaryColor({255, 213, 0});
        } 
        else if (selectedFlag == "Wlochy") {
            this->setPrimaryColor({0, 146, 70});
            this->setSecondaryColor({206, 43, 55});
        } 
        else if (selectedFlag == "LGBT") {
            this->setPrimaryColor({255, 0, 0});
            this->setSecondaryColor({0, 0, 255});
        }
    }
};
