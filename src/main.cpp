#include <Geode/Geode.hpp>
#include <Geode/modify/SimplePlayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayer, SimplePlayer) {
    void updatePlayerFrame() {
        SimplePlayer::updatePlayerFrame();

        auto selectedFlag = Mod::get()->getSettingValue<std::string>("selected-flag");

        if (selectedFlag == "Polska") {
            this->setColor({255, 255, 255});
            this->setSecondColor({214, 40, 40});
        } 
        else if (selectedFlag == "Ukraina") {
            this->setColor({0, 91, 187});
            this->setSecondColor({255, 213, 0});
        } 
        else if (selectedFlag == "Wlochy") {
            this->setColor({0, 146, 70});
            this->setSecondColor({206, 43, 55});
        } 
        else if (selectedFlag == "LGBT") {
            this->setColor({255, 0, 0});
            this->setSecondColor({0, 0, 255});
        }
    }
};
