#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>

using namespace std;

int xp = 0, maxXP = 35 , level = 1, maxLevel = 100, money = 25, damage = 0, health = 1, maxHP = 0, action = 0, potions = 0, potionPrice = 250;
string className = "", buy = "";
bool leave = false;

void showStatus() {
    cout << "\n Your Character is an " << className << ", and he is level " << level << ", with $" << money << ", and he have " << health << "HP and its damage per attack is " << damage << "\n";
}

void selectClass(string mage, string warrior) {
    cout << "Ok! Let's create your character... \n";
    cout << "What is your Class? \n";
    cout << "\n";

    cout << "Mage (12 Damage, 8 Health \n";
    cout << "Warrior (10 Damage, 10 Health \n";
    cout << "Answer: ";
    cin >> className;
    cout << "\n";

    if (className == mage) {
        damage = 12;
        health = 90;
        maxHP = 90;

        cout << "Your class is " << className << "! \n";
    } else if (className == warrior) {
        damage = 10;
        health = 100;
        maxHP = 100;

        cout << "Your class is " << className << "! \n";
    } else {
        cout << "This class doesn't exists! \n";
    }
}

void explore() {
    cout << "You explored the map! +50 xp and +$35 \n";
    xp += 50;
    money += 35;
    action = 0;

    health -= 15;
}

void battle() {
    cout << "You defeated some enemies! +75 xp and +$125 \n";
    xp += 75;
    money += 125;
    action = 0;

    health -= 25;
}

void levelUp() {
    if (xp > maxXP && level < maxLevel) {
        cout << "\n Congratulations! You leveled up! \n";

        level += 1;
        xp -= maxXP;
        maxXP += 15;

        damage += 1;
        health += 7;
        maxHP += 7;

        showStatus();
    }
}

void gameOver() {
    if (health <= 0) {
        leave = true;
    }
}

void usePotions() {
    if (potions > 0) {
        cout << "You used one potion, your health has been completely restored. \n";
        cout << "You have " << maxHP << " HP.";

        potions -= 1;
        health = maxHP;
    } else {
        if (money >= potionPrice) {
            cout << "You haven't potions, You bought one and used it... Your Health has been completely restored. \n";
            cout << "You have " << maxHP << " HP.";
            health = maxHP;

            cout << "Wanna buy 1 more HP Potion? \n";
            cout << "Y - Yes \n N - No \n";
            cout << "Answer: ";
            cin >> buy;
            cout << "\n";


            if (buy == "Y") {
                if (money >= potionPrice) {

                } else {

                }
            } else {
            cout << "Ok! returning to the game... \n";
            }
            } else {
                cout << "You don't have money to buy one potion. \n Returning to the game... \n \n";
            }
    }
}

int main() {
    string classes[2] = {"Mage", "Warrior"};
    char answer;

    cout << "Welcome to the Game! \n";

    cout << "Do you want to create your character? \n";
    cout << "Y - Yes \n";
    cout << "N - No \n";
    cout << "Answer: ";
    cin >> answer;
    cout << "\n";

    selectClass(classes[0], classes[1]);
    cout << "\nYour Character has been created, what do you want to do now?" << "\n";

    do {
        if (answer == 'Y') {
            cout << "\n1 - Explore the map \n2 - Fight Enemies \n3 - Use 1 Health Potion \n4 - Leave the game \n";
            cout << "Answer: ";
            cin >> action;
            cout << "\n";

            if (action == 1) {
                gameOver();
                explore();
                levelUp();
            } else if (action == 2) {
                gameOver();
                battle();
                levelUp();
            } else if (action == 3) {
                gameOver();
                usePotions();
                levelUp();
            } else {
                cout << "Ok! See you soon! \n";
                leave = true;
                break;
            }
        } else {
            cout << "Ok! I hope see you soon! \n";
            showStatus();
            leave = true;
            break;
        }
    } while (!leave);

    return level;
}
