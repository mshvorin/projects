#include <iostream>
using namespace std;

class Circuit{
private:
bool first_switch = 0;
bool second_switch = 0;
bool lamp_state = 0;
public:
int get_first_switch_state(){
return first_switch;
}
int get_second_switch_state(){
return second_switch;
}
int get_lamp_state() {
return lamp_state;
}
void toggle_first_switch() {
	if (first_switch == 0) {
		first_switch = 1;
	}
	else if (first_switch == 1) {
		first_switch = 0;
	}
	if (lamp_state == 0) {
		lamp_state = 1;
	}
	else if (lamp_state == 1) {
		lamp_state = 0;
	}
}
void toggle_second_switch() {
	if (second_switch == 0) {
		second_switch = 1;
	}
	else if (second_switch == 1) {
		second_switch = 0;
	}
	if (lamp_state == 0) {
		lamp_state = 1;
	}
	else if (lamp_state == 1) {
		lamp_state = 0;
	}
}
};
