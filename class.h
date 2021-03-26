#include <iostream>
#include <regex>
#include <math.h>
#include <string>
#define PI 3.1415926
#define e 2.71828

int DecimalToBinary(int dec);
int be_integer(double x);
bool is_integer(std::string num);


//------------------------------------------------------QXH

class realmain {
 private:
  int get_realuser_input();
  void select_realmenu_item(int input);
  void print_realmain_menu();
  void realmenu_item_1();
  void realmenu_item_2();
  void realmenu_item_3();

 public:
  void realmain_menu();
};

class analogy {
 private:
  void select_menu_item(int input);
  void print_main_menu();
  void menu_item_1();
  void menu_item_2();
  void menu_item_3();
  void menu_item_4();
  void menu_item_5();
  void go_back_to_main();

 public:
  int get_user_input();
  void qxh_main_menu();
};

class directory2 {
 private:
  void print_main_menu_t2();
  void Analog_to_Digital();
  void Digital_to_Analog();
  void select_sub_menu_t2_item(int input);
  void sub_go_back_to_main();

 public:
  void sub_directory_t2();
};

class directory3 {
 private:
  void print_main_menu_t3();
  void subt3_go_back_to_main();
  void Inverting_Operational_Amplifier();
  void Non_inverting_Operational_Amplifier();
  void Differential_Amplifier();
  void Voltage_Follower();
  void select_sub_menu_t3_item(int input);
  int subt3_get_user_input();

 public:
  void sub_directory_t3();
};

class directory4 {
 private:
  void print_main_menu_t4();
  int subt4_get_user_input();
  void select_sub_menu_t4_item(int input);
  void subt4_go_back_to_main();
  void RC_Circuit();
  void RL_Circuit();
  void LC_Circuit();
  void RLC_Circuit();
  void Voltage_Divider();

 public:
  void sub_directory_t4();
};

class directory5 {
 private:
  void print_main_menu_t5();
  int subt5_get_user_input();
  void select_sub_menu_t5_item(int input);
  void Fermi_Dirac_Function();
  void Density_of_States();
  void subt5_go_back_to_main();

 public:
  void sub_directory_t5();
};

