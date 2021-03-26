#include "class.h"

//------------------------------------------Main object

realmain r;

//------------------------------------------Analog object
analogy a;
directory2 d2;
directory3 d3;
directory4 d4;
directory5 d5;



//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY
//------------------------------------------Main menu writed by HHY

void realmain::realmain_menu() {
  print_realmain_menu();
  int input = get_realuser_input();
  select_realmenu_item(input);
}

int realmain::get_realuser_input() {
  int input;
  std::string input_string;
  bool valid_input = false;
  int menu_items = 4;

  do {
    std::cout << "\nSelect item: ";
    std::cin >> input_string;
    valid_input = is_integer(input_string);
    // if input is not an integer, print an error message
    if (valid_input == false) {
      std::cout << "Enter an integer!\n";
    } else {  // if it is an int, check whether in range
      input = std::stoi(input_string);  // convert to int
      if (input >= 1 && input <= menu_items) {
        valid_input = true;
      } else {
        std::cout << "Invalid menu item!\n";
        valid_input = false;
      }
    }
  } while (valid_input == false);

  return input;
}

void realmain::select_realmenu_item(int input) {
  switch (input) {
    case 1:
      realmenu_item_1();
      break;
    case 2:
      realmenu_item_2();
      break;
    case 3:
      realmenu_item_3();
      break;
    default:
      exit(1);
      break;
  }
}

void realmain::print_realmain_menu() {
  std::cout << "\n----------- Main menu -----------\n";
  std::cout << "|\t\t\t\t|\n";
  std::cout << "|\t1. Analog Circuit  \t|\n";
  std::cout << "|\t2. Digital Circuit  \t|\n";
  std::cout << "|\t3. Menu item  \t\t|\n";
  std::cout << "|\t4. Exit\t\t\t|\n";
  std::cout << "|\t\t\t\t|\n";
  std::cout << "---------------------------------\n";
}

bool is_integer(std::string num) {
  return std::regex_match(num, std::regex("[+-]?[0-9]+"));
}

void realmain::realmenu_item_1() {
  system("clear");
  std::cout << "By Xuhe Qian";
  a.qxh_main_menu();
}
void realmain::realmenu_item_2() {
  std::cout << "menu2";

}
void realmain::realmenu_item_3() { std::cout << "menu3"; }

//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH
//------------------------------------------------------------QXH

void analogy::qxh_main_menu() {
  print_main_menu();
  int input = get_user_input();
  select_menu_item(input);
}

int analogy::get_user_input() {
  int input;
  std::string input_string;
  bool valid_input = false;
  int menu_items = 7;  // different menus have different values

  do {
    std::cout << "\nSelect item: ";
    std::cin >> input_string;
    valid_input = is_integer(input_string);
    // if input is not an integer, print an error message
    if (valid_input == false) {
      std::cout << "Enter an integer!\n";
    } else {  // if it is an int, check whether in range
      input = std::stoi(input_string);  // convert to int
      if (input >= 1 && input <= menu_items) {
        valid_input = true;
      } else {
        std::cout << "Invalid menu item!\n";
        valid_input = false;
      }
    }
  } while (valid_input == false);

  return input;
}

void analogy::select_menu_item(int input) {
  switch (input) {
    case 1:
      menu_item_1();
      break;
    case 2:
      menu_item_2();
      break;
    case 3:
      menu_item_3();
      break;
    case 4:
      menu_item_4();
    case 5:
      menu_item_5();
      break;
    case 6:
      system("clear");
      r.realmain_menu();
      break;
    default:
      exit(1);
      break;
  }
}

// here is the function of the main branches.
void analogy::print_main_menu() {
  std::cout << "\n----------- Analog circuit -------------\n";
  std::cout << "|\t\t\t\t\t|\n";
  std::cout << "|\t1. Index\t\t\t|\n";
  std::cout << "|\t2. Analog Digital Converter\t|\n";
  std::cout << "|\t3. Operational Amplifier\t|\n";
  std::cout << "|\t4. Inductive Circuit\t\t|\n";
  std::cout << "|\t5. Transistors\t\t\t|\n";
  std::cout << "|\t6. Back To Main Menu\t\t|\n";
  std::cout << "|\t7. Exit\t\t\t\t|\n";
  std::cout << "|\t\t\t\t\t|\n";
  std::cout << "----------------------------------------\n";
}

void analogy::go_back_to_main() {
  std::string input;

  do {
    std::cout << "[Enter 'B'to go back to analog menu]\n";
    std::cin >> input;
  } while (input != "B");
  system("clear");
  qxh_main_menu();
}

void analogy::menu_item_1() {
  system("clear");
  std::cout << "\n>> Index\n";
  std::cout << "                                           "
               "----Index--------------------------Introduce menu items\n";
  std::cout << "                                          |----Analog Digital "
               "Converter------ Analog to Digital               \n";
  std::cout << "--------Main Menu------Analog Circuit-----                     "
               "               Digital to Analog  \n";
  std::cout << "                                          |                     "
               "                       \n";
  std::cout << "                                          |                    "
               "                        \n";
  std::cout << "                                          |----Operational "
               "Amplifier----------Inverting Operational Amplifier\n";
  std::cout << "                                          |                    "
               "               Non-inverting Operational Amplifier\n";
  std::cout << "                                          |                    "
               "               Differential Amplifier\n";
  std::cout << "                                          |                    "
               "               Voltage Follower\n";
  std::cout << "                                          |                    "
               "                      \n";
  std::cout << "                                          |                    "
               "                      \n";
  std::cout << "                                          |----Inductive "
               "Circuit--------------RC Circuit\n";
  std::cout << "                                          |                    "
               "               RL Circuit\n";
  std::cout << "                                          |                    "
               "               LC Circuit\n";
  std::cout << "                                          |                    "
               "               RLC Circuit\n";
  std::cout << "                                          |                    "
               "               Vlotage Divider\n";
  std::cout << "                                          |                    "
               "                      \n";
  std::cout << "                                          |                    "
               "                      \n";
  std::cout << "                                           "
               "----Transistors--------------------Fermi-Dirac Function\n";
  std::cout << "                                                               "
               "               Density of States\n";

  // you can call a function from here that handles menu 1
  go_back_to_main();
}
void analogy::menu_item_2() {
  system("clear");
  d2.sub_directory_t2();
  // you can call a function from here that handles menu 2
}
void analogy::menu_item_3() {
  system("clear");
  d3.sub_directory_t3();
}
void analogy::menu_item_4() {
  system("clear");
  d4.sub_directory_t4();
  // you can call a function from here that handles menu 4
}

void analogy::menu_item_5() {
  system("clear");
  d5.sub_directory_t5();
  // you can call a function from here that handles menu 4
}

// here is the function of the sub-directory of t2

void directory2::sub_directory_t2() {
  system("clear");
  print_main_menu_t2();
  int input = a.get_user_input();
  select_sub_menu_t2_item(input);
}

void directory2::print_main_menu_t2() {
  std::cout << "\n----------- Analog circuit Analog Digital Converter "
               "-------------\n";
  std::cout << "|\t\t\t\t\t\t\t\t|\n";
  std::cout << "|\t\t1. Analog to Digital\t\t\t\t|\n";
  std::cout << "|\t\t2. Digital to Analog\t\t\t\t|\n";
  std::cout << "|\t\t3. Exit to the analog menu\t\t\t|\n";
  std::cout << "|\t\t4. Exit\t\t\t\t\t\t|\n";
  std::cout << "|\t\t\t\t\t\t\t\t|\n";
  std::cout
      << "----------------------------------------------------------------\n";
}

void directory2::sub_go_back_to_main() {
  std::string input;

  do {
    std::cout << "" << std::endl;
    std::cout << "[Enter 'B'to go back to analog menu]\n";
    std::cout << "[Enter 'b' to go back to upper menu]\n";
    std::cin >> input;
  } while (input != "b" && input != "B");

  if (input == "B") {
    system("clear");
    a.qxh_main_menu();
  } else if (input == "b") {
    system("clear");
    sub_directory_t2();
  }
}

void directory2::Analog_to_Digital() {
  int usr_input_bits;
  double usr_input_system_voltage;
  double usr_input_analog_voltage_measured;
  const std::string str = "0";
  std::string str1 = "0";

  do {
    system("clear");

    std::cout << "Please enter the bits of ADC: ";
    std::cin >> usr_input_bits;
    std::cout << "Please enter the system voltage(FSR) of ADC: ";
    std::cin >> usr_input_system_voltage;
    std::cout << "Please enter the measured analog voltage: ";
    std::cin >> usr_input_analog_voltage_measured;
  } while (usr_input_system_voltage < usr_input_analog_voltage_measured);
  for (int i = 1; i < usr_input_bits; i++) {
    str1 = str1 + str;
  }
  int adc_resolution = pow(2, usr_input_bits) - 1;
  double final_answer = (adc_resolution / usr_input_system_voltage) *
                        usr_input_analog_voltage_measured;
  double resolution_jindu = usr_input_system_voltage / (adc_resolution + 1);
  int processed_value = be_integer(final_answer);
  std::cout << "\n------ Analog Digital Converter ------\n";
  std::cout << "\t\t\t\t\t\n";
  std::cout << "The discrete levels are: " << adc_resolution + 1 << std::endl;
  std::cout << "The ADC resolution is: " << resolution_jindu << std::endl;
  std::cout << "The digital reading is(in decimal) : " << processed_value
            << std::endl;
  if (processed_value != 0) {
    std::cout << "The digital reading is(in hexadecimal) : "
              << DecimalToBinary(processed_value) << std::endl;
  } else {
    std::cout << "The digital reading is(in hexadecimal) : " << str1
              << std::endl;
  }
  // you can call a function from here that handles menu 1
  sub_go_back_to_main();
}

int DecimalToBinary(int dec) {
  int result = 0, temp = dec, j = 1;
  while (temp) {
    result = result + j * (temp % 2);
    temp = temp / 2;
    j = j * 10;
  }
  return result;
}

void directory2::Digital_to_Analog() {
  int usr_input_bits;
  double usr_input_system_voltage;
  double usr_input_digital_voltage_measured;

  do {
    system("clear");

    std::cout << "Please enter the bits of DAC: ";
    std::cin >> usr_input_bits;
    std::cout << "Please enter the system voltage(FSR) of DAC: ";
    std::cin >> usr_input_system_voltage;
    std::cout
        << "Please enter the measured digital voltage(in decimal): ";  //---------------->Hehaoyang
    std::cin >> usr_input_digital_voltage_measured;
  } while (pow(2, usr_input_bits) - 1 < usr_input_digital_voltage_measured);

  int dac_resolution = pow(2, usr_input_bits) - 1;
  double final_answer = usr_input_digital_voltage_measured *
                        usr_input_system_voltage / dac_resolution;
  double resolution_jindu = usr_input_system_voltage / (dac_resolution + 1);
  std::cout << "\n------ Digital Analog Converter ------\n";
  std::cout << "\t\t\t\t\t\n";
  std::cout << "The discrete levels are: " << dac_resolution + 1 << std::endl;
  std::cout << "The DAC resolution is: " << resolution_jindu << std::endl;
  std::cout << "The analog reading is(in decimal) : " << final_answer
            << std::endl;
  sub_go_back_to_main();
}

// to derive a nearest value
int be_integer(double x) {
  if (x - floor(x) < 0.5) {
    return floor(x);
  } else {
    return ceil(x);
  }
}

void directory2::select_sub_menu_t2_item(int input) {
  switch (input) {
    case 1:
      Analog_to_Digital();
      break;
    case 2:
      Digital_to_Analog();
      break;
    case 3:
      system("clear");
      a.qxh_main_menu();
      break;
    default:
      exit(1);
      break;
  }
}

// here is the menu function of t3

void directory3::sub_directory_t3() {
  system("clear");
  print_main_menu_t3();
  int input = subt3_get_user_input();
  select_sub_menu_t3_item(input);
}

void directory3::print_main_menu_t3() {
  std::cout << "\n------------------------- Operational Amplifier "
               "------------------------\n";
  std::cout << "|\t\t\t\t\t\t\t\t\t|\n";
  std::cout << "|\t\t1. Inverting Operational Amplifier\t\t\t|\n";
  std::cout << "|\t\t2. Non-inverting Operational Amplifier\t\t\t|\n";
  std::cout << "|\t\t3. Differential Amplifier\t\t\t\t|\n";
  std::cout << "|\t\t4. Voltage Follower\t\t\t\t\t|\n";
  std::cout << "|\t\t5. Exit to the analog menu\t\t\t\t|\n";
  std::cout << "|\t\t6. Exit\t\t\t\t\t\t\t|\n";
  std::cout << "|\t\t\t\t\t\t\t\t\t|\n";
  std::cout << "---------------------------------------------------------------"
               "---------\n";
}

void directory3::subt3_go_back_to_main() {
  std::string input;

  do {
    std::cout << "" << std::endl;
    std::cout << "[Enter 'B'to go back to analog menu]\n";
    std::cout << "[Enter 'b' to go back to upper menu]\n";
    std::cin >> input;
  } while (input != "b" && input != "B");

  if (input == "B") {
    system("clear");
    a.qxh_main_menu();
  } else if (input == "b") {
    system("clear");
    sub_directory_t3();
  }
}

void directory3::Inverting_Operational_Amplifier() {
  system("clear");
  std::cout << "               ---R2-----" << std::endl;
  std::cout << "              |          |" << std::endl;
  std::cout << "Vin------R1-----(-)|     |" << std::endl;
  std::cout << "                   | >>-----------Vout" << std::endl;
  std::cout << "           -----(+)|" << std::endl;
  std::cout << "          |" << std::endl;
  std::cout << "          R3" << std::endl;
  std::cout << "          |" << std::endl;
  std::cout << "        Ground" << std::endl;
  std::cout << "" << std::endl;
  double R1;
  double R2;
  double Vin;
  double Vout;
  double G;
  std::cout << "Please enter the R1 of the inverting operational amplifier: ";
  std::cin >> R1;
  std::cout << "Please enter the R2 of the inverting operational amplifier: ";
  std::cin >> R2;
  std::cout << "Please enter the Vin of the inverting operational amplifier: ";
  std::cin >> Vin;
  Vout = -(R2 / R1) * Vin;
  G = -(R2 / R1);
  std::cout << "\n----------- Inverting Operational Amplifier ----------\n";
  std::cout << "\t\t\t\t\t\n";
  std::cout << "The output voltage: " << Vout << std::endl;
  std::cout << "The gain: " << G << std::endl;
  std::cout << "Phase angle is 180 degree " << std::endl;
  // you can call a function from here that handles menu 1
  subt3_go_back_to_main();
}

void directory3::Non_inverting_Operational_Amplifier() {
  system("clear");
  std::cout << "Vin--------------(+)|" << std::endl;
  std::cout << "                    | >>-----------Vout" << std::endl;
  std::cout << "           ------(-)|        |       " << std::endl;
  std::cout << "          |                  R2" << std::endl;
  std::cout << "          |                  |" << std::endl;
  std::cout << "           ------------------|" << std::endl;
  std::cout << "                             |" << std::endl;
  std::cout << "                             |" << std::endl;
  std::cout << "                             R1" << std::endl;
  std::cout << "                             |" << std::endl;
  std::cout << "                             |" << std::endl;
  std::cout << "                           Ground" << std::endl;
  std::cout << "" << std::endl;
  double R1;
  double R2;
  double Vin;
  double Vout;
  double G;
  std::cout
      << "Please enter the R1 of the non-inverting operational amplifier: ";
  std::cin >> R1;
  std::cout
      << "Please enter the R2 of the non-inverting operational amplifier: ";
  std::cin >> R2;
  std::cout
      << "Please enter the Vin of the non-inverting operational amplifier: ";
  std::cin >> Vin;
  Vout = (1 + R2 / R1) * Vin;
  G = 1 + R2 / R1;
  std::cout << "\n----------- Non-Inverting Operational Amplifier ----------\n";
  std::cout << "\t\t\t\t\t\n";
  std::cout << "The output voltage: " << Vout << std::endl;
  std::cout << "The gain: " << G << std::endl;
  std::cout << "Phase angle is 0 degree " << std::endl;
  subt3_go_back_to_main();
}

void directory3::Differential_Amplifier() {
  system("clear");
  std::cout << "               ---R2-----" << std::endl;
  std::cout << "              |          |" << std::endl;
  std::cout << "V1------R1------(-)|     |" << std::endl;
  std::cout << "                   | >>-----------Vout" << std::endl;
  std::cout << "V2 -----R3------(+)|" << std::endl;
  std::cout << "          |" << std::endl;
  std::cout << "          R4" << std::endl;
  std::cout << "          |" << std::endl;
  std::cout << "        Ground" << std::endl;
  std::cout << "" << std::endl;
  double R1;
  double R2;
  double R3;
  double R4;
  double V1;
  double V2;
  double Vout;
  std::cout << "Please enter the R1 of the differential amplifier: ";
  std::cin >> R1;
  std::cout << "Please enter the R2 of the differential amplifier: ";
  std::cin >> R2;
  std::cout << "Please enter the R1 of the differential amplifier: ";
  std::cin >> R3;
  std::cout << "Please enter the R2 of the differential amplifier: ";
  std::cin >> R4;
  std::cout << "Please enter the V1 of the differential amplifier: ";
  std::cin >> V1;
  std::cout << "Please enter the V2 of the differential amplifier: ";
  std::cin >> V2;
  Vout = (R1 + R2 / R3 + R4) * (R4 / R1) * V2 - (R2 / R1) * V1;
  std::cout << "\n----------- Differential Amplifier ----------\n";
  std::cout << "\t\t\t\t\t\n";
  std::cout << "The output voltage: " << Vout << std::endl;
  std::cout << "Phase angle is 180 degree " << std::endl;
  subt3_go_back_to_main();
}

void directory3::Voltage_Follower() {
  system("clear");
  std::cout << "Vin--------(+)|" << std::endl;
  std::cout << "              | >>-----------Vout" << std::endl;
  std::cout << "         --(-)|        |" << std::endl;
  std::cout << "        |              |" << std::endl;
  std::cout << "        |              |" << std::endl;
  std::cout << "         -------------- " << std::endl;
  std::cout << "" << std::endl;
  double Vin;
  std::cout << "Please enter the Vin of the voltage follower: ";
  std::cin >> Vin;
  std::cout << "\n----------- Voltage Follower ----------\n";
  std::cout << "\t\t\t\t\t\n";
  std::cout << "The output voltage: " << Vin << std::endl;
  std::cout << "Phase angle is 0 degree " << std::endl;
  subt3_go_back_to_main();
}

int directory3::subt3_get_user_input() {
  int input;
  std::string input_string;
  bool valid_input = false;
  int menu_items = 6;  // different menus have different values

  do {
    std::cout << "\nSelect item: ";
    std::cin >> input_string;
    valid_input = is_integer(input_string);
    // if input is not an integer, print an error message
    if (valid_input == false) {
      std::cout << "Enter an integer!\n";
    } else {  // if it is an int, check whether in range
      input = std::stoi(input_string);  // convert to int
      if (input >= 1 && input <= menu_items) {
        valid_input = true;
      } else {
        std::cout << "Invalid menu item!\n";
        valid_input = false;
      }
    }
  } while (valid_input == false);

  return input;
}

void directory3::select_sub_menu_t3_item(int input) {
  switch (input) {
    case 1:
      Inverting_Operational_Amplifier();
      break;
    case 2:
      Non_inverting_Operational_Amplifier();
      break;
    case 3:
      Differential_Amplifier();
      break;
    case 4:
      Voltage_Follower();
      break;
    case 5:
      system("clear");
      a.qxh_main_menu();
      break;
    default:
      exit(1);
      break;
  }
}

//------------------------------------//here is the menu function of t4
//------>Xie_lingkun

void directory4::sub_directory_t4() {
  system("clear");
  print_main_menu_t4();
  int input = subt4_get_user_input();
  select_sub_menu_t4_item(input);
}

void directory4::print_main_menu_t4() {
  std::cout << "\n--------------- Inductive Circuit & Voltage Divider "
               "--------------\n";
  std::cout << "|\t\t\t\t\t\t|\n";
  std::cout << "|\t\t1. RC Circuit\t\t\t|\n";
  std::cout << "|\t\t2. RL Circuit\t\t\t|\n";
  std::cout << "|\t\t3. LC Circuit\t\t\t|\n";
  std::cout << "|\t\t4. RLC Circuit\t\t\t|\n";
  std::cout << "|\t\t5. Voltage Divider\t\t|\n";
  std::cout << "|\t\t6. Exit to the analog menu\t|\n";
  std::cout << "|\t\t7. Exit\t\t\t\t|\n";
  std::cout << "|\t\t\t\t\t\t|\n";
  std::cout << "------------------------------------------------\n";
}

int directory4::subt4_get_user_input() {
  int input;
  std::string input_string;
  bool valid_input = false;
  int menu_items = 7;  // different menus have different values

  do {
    std::cout << "\nSelect item: ";
    std::cin >> input_string;
    valid_input = is_integer(input_string);
    // if input is not an integer, print an error message
    if (valid_input == false) {
      std::cout << "Enter an integer!\n";
    } else {  // if it is an int, check whether in range
      input = std::stoi(input_string);  // convert to int
      if (input >= 1 && input <= menu_items) {
        valid_input = true;
      } else {
        std::cout << "Invalid menu item!\n";
        valid_input = false;
      }
    }
  } while (valid_input == false);

  return input;
}

void directory4::select_sub_menu_t4_item(int input) {
  switch (input) {
    case 1:
      RC_Circuit();
      break;
    case 2:
      RL_Circuit();
      break;
    case 3:
      LC_Circuit();
      break;
    case 4:
      RLC_Circuit();
      break;
    case 5:
      Voltage_Divider();
      break;
    case 6:
      system("clear");
      a.qxh_main_menu();
      break;
    default:
      exit(1);
      break;
  }
}

void directory4::subt4_go_back_to_main() {
  std::string input;

  do {
    std::cout << "" << std::endl;
    std::cout << "[Enter 'B'to go back to analog menu]\n";
    std::cout << "[Enter 'b' to go back to upper menu]\n";
    std::cin >> input;
  } while (input != "b" && input != "B");

  if (input == "B") {
    system("clear");
    a.qxh_main_menu();
  } else if (input == "b") {
    system("clear");
    sub_directory_t4();
  }
}

void directory4::RC_Circuit() {
  system("clear");
  double source_voltage;
  double resistence;
  double capacitance;
  double time_passed;
  double time_constant;
  double instant_voltage_c;
  double instant_voltage_c_release;
  std::cout << "Please enter the capacitance in uF: ";
  std::cin >> capacitance;
  std::cout << "Please enter the resistence in kilo-ohm: ";
  std::cin >> resistence;
  std::cout << "Please enter the source voltage in volt: ";
  std::cin >> source_voltage;
  std::cout << "Please enter the passed time in millisecond: ";
  std::cin >> time_passed;
  double middle;
  middle =
      -(time_passed * 0.001) / ((resistence * 1000) * (capacitance / 1000000));
  instant_voltage_c = source_voltage * (1 - pow(e, middle));
  instant_voltage_c_release = source_voltage * (pow(e, middle));
  time_constant = (resistence / 1000) * (capacitance / 1000000);
  std::cout << "\n----------- RC Circuit ----------\n";
  std::cout << "\t\t\t\t\t\n";
  std::cout << "The time constant is: " << time_constant << std::endl;
  std::cout << "If the capacitor is charging, then the instantaneous voltage "
               "across the capacitor is "
            << instant_voltage_c << " V" << std::endl;
  std::cout << "If the capacitor is discharging, then the instantaneous "
               "voltage across the capacitor is "
            << instant_voltage_c_release << " V" << std::endl;

  subt4_go_back_to_main();
}

void directory4::RL_Circuit() {
  system("clear");
  double resistence;
  double inductance;
  double combined_impedance;
  double frequency;
  double time_constant;
  std::cout << "Please enter the inductance in uH: ";
  std::cin >> inductance;
  std::cout << "Please enter the resistence in kilo-ohm: ";
  std::cin >> resistence;
  std::cout << "Please enter the frequency in hz: ";
  std::cin >> frequency;
  combined_impedance = sqrt(resistence * 1000 +
                            pow(2 * PI * frequency * inductance / 1000000, 2));
  time_constant = (inductance / 1000000) / (resistence * 1000);
  std::cout << "\n----------- RL Circuit ----------\n";
  std::cout << "\t\t\t\t\t\n";
  std::cout << "The combined impedance: " << combined_impedance << " ohm"
            << std::endl;
  std::cout << "The time constant of RL circuit is: " << time_constant
            << std::endl;
  subt4_go_back_to_main();
}

void directory4::LC_Circuit() {
  system("clear");
  double capacitance;
  double inductance;
  double frequency;
  std::cout << "Please enter capacitance in pF: ";
  std::cin >> capacitance;
  std::cout << "Please enter the inductance in uH: ";
  std::cin >> inductance;
  frequency =
      1 / (2 * PI * sqrt(capacitance / 1000000000000 * inductance / 1000000));
  std::cout << "\n----------- LC Circuit ----------\n";
  std::cout << "\t\t\t\t\t\n";
  std::cout << "The Resonant Frequency : " << frequency << std::endl;

  subt4_go_back_to_main();
}

void directory4::RLC_Circuit() {
  system("clear");
  double capacitance;
  double inductance;
  double resistence;
  double frequency;
  double xl;
  double xc;
  double x;
  std::cout << "Please enter the inductance in uH: ";
  std::cin >> inductance;
  std::cout << "Please enter the resistence in kilo-ohm: ";
  std::cin >> resistence;
  std::cout << "Please enter capacitance in pF: ";
  std::cin >> capacitance;
  std::cout << "Please enter the frequency in hz: ";
  std::cin >> frequency;
  xl = 2 * PI * frequency * inductance / 1000000;
  xc = 1 / (2 * PI * frequency * capacitance / 1000000000000);
  x = xl - xc;
  std::cout << "\n-------------- RLC Circuit -------------\n";
  std::cout << "\t\t\t\t\t\n";
  std::cout << "The impedance of the capactior: " << xc << "ohm" << std::endl;
  std::cout << "The impedance of the incudtor: " << xl << "ohm" << std::endl;
  std::cout << "The combined impedance: "
            << sqrt(pow(resistence, 2) + pow(x, 2)) << std::endl;
  subt4_go_back_to_main();
}

void directory4::Voltage_Divider() {
  system("clear");
  std::cout << "Vin-----------  " << std::endl;
  std::cout << "              | " << std::endl;
  std::cout << "              Z1        " << std::endl;
  std::cout << "              |             " << std::endl;
  std::cout << "              |-------Vout              " << std::endl;
  std::cout << "              |             " << std::endl;
  std::cout << "              Z2              " << std::endl;
  std::cout << "              |             " << std::endl;
  std::cout << "              |              " << std::endl;
  std::cout << "            Ground " << std::endl;
  std::cout << "" << std::endl;
  double Z1;
  double Z2;
  double Vin;
  double Vout;
  std::cout << "Please enter Z1 in ohm: ";
  std::cin >> Z1;
  std::cout << "Please enter Z2 in ohm: ";
  std::cin >> Z2;
  std::cout << "Please enter Vin in volt: ";
  std::cin >> Vin;
  Vout = Vin * (Z2 / (Z1 + Z2));
  std::cout << "\n-------------- Voltage Divider -------------\n";
  std::cout << "\t\t\t\t\t\n";
  std::cout << "The output voltage is: " << Vout << "ohm" << std::endl;
  subt4_go_back_to_main();
}

// here is the menu function of t5

void directory5::sub_directory_t5() {
  system("clear");
  print_main_menu_t5();
  int input = subt5_get_user_input();
  select_sub_menu_t5_item(input);
}

void directory5::print_main_menu_t5() {
  std::cout << "\n-------------------- Transistors ---------------\n";
  std::cout << "|\t\t\t\t\t\t|\n";
  std::cout << "|\t\t1. Fermi-Dirac Function\t\t|\n";
  std::cout << "|\t\t2. Density of States\t\t|\n";
  std::cout << "|\t\t3. Exit to the main menu\t|\n";
  std::cout << "|\t\t4. Exit\t\t\t\t|\n";
  std::cout << "|\t\t\t\t\t\t|\n";
  std::cout << "------------------------------------------------\n";
}

int directory5::subt5_get_user_input() {
  int input;
  std::string input_string;
  bool valid_input = false;
  int menu_items = 4;  // different menus have different values

  do {
    std::cout << "\nSelect item: ";
    std::cin >> input_string;
    valid_input = is_integer(input_string);
    // if input is not an integer, print an error message
    if (valid_input == false) {
      std::cout << "Enter an integer!\n";
    } else {  // if it is an int, check whether in range
      input = std::stoi(input_string);  // convert to int
      if (input >= 1 && input <= menu_items) {
        valid_input = true;
      } else {
        std::cout << "Invalid menu item!\n";
        valid_input = false;
      }
    }
  } while (valid_input == false);

  return input;
}

void directory5::select_sub_menu_t5_item(int input) {
  switch (input) {
    case 1:
      Fermi_Dirac_Function();
      break;
    case 2:
      Density_of_States();
      break;
    case 3:
      system("clear");
      a.qxh_main_menu();
      break;
    default:
      exit(1);
      break;
  }
}

void directory5::subt5_go_back_to_main() {
  std::string input;

  do {
    std::cout << "" << std::endl;
    std::cout << "[Enter 'B'to go back to analog menu]\n";
    std::cout << "[Enter 'b' to go back to upper menu]\n";
    std::cin >> input;
  } while (input != "b" && input != "B");

  if (input == "B") {
    system("clear");
    a.qxh_main_menu();
  } else if (input == "b") {
    system("clear");
    sub_directory_t5();
  }
}

void directory5::Fermi_Dirac_Function() {
  system("clear");
  double bolt = 1.38e-23;
  double t;
  double E;
  double Ef;
  std::cout << "Please enter the temperature in kelvin: ";
  std::cin >> t;
  if (t == 0) {
    int k;

    do {
      std::cout << "Please select an option: " << std::endl;
      std::cout << "" << std::endl;
      std::cout << "[1] E > Ef " << std::endl;
      std::cout << "[2] E < Ef " << std::endl;
      std::cout << "[3] E = Ef " << std::endl;
      std::cin >> k;
    } while (k != 1 && k != 2 && k != 3);
    if (k == 1) {
      std::cout << "\n-------------- Fermi-Dirac function -------------\n";
      std::cout << "\t\t\t\t\t\n";
      std::cout << "f(E) = 0 " << std::endl;
    } else if (k == 2) {
      std::cout << "\n-------------- Fermi-Dirac function -------------\n";
      std::cout << "\t\t\t\t\t\n";
      std::cout << "f(E) = 1 " << std::endl;
    } else {
      std::cout << "\n-------------- Fermi-Dirac function -------------\n";
      std::cout << "\t\t\t\t\t\n";
      std::cout << "f(E) = 0.5 " << std::endl;
    }
  } else {
    double finalas;
    std::cout << "Please enter the energy states: ";
    std::cin >> E;
    std::cout << "Please enter the Fermi energy states: ";
    std::cin >> Ef;
    finalas = 1 / (1 + pow(e, (E - Ef) / bolt * t));
    std::cout << "\n-------------- Fermi-Dirac function -------------\n";
    std::cout << "\t\t\t\t\t\n";
    std::cout << "f(E) = " << finalas << std::endl;
  }

  subt5_go_back_to_main();
}

void directory5::Density_of_States() {
  system("clear");
  double m0;
  double h = 6.63e-34 * 123;
  double E;
  std::cout << "Please enter m0: ";
  std::cin >> m0;
  std::cout << "Please enter energy state: ";
  std::cin >> E;
  double finx = (m0 / (pow(h, 3) * pow(PI, 2))) * sqrt(2 * m0 * E);
  std::cout << "\n-------------- Density of States -------------\n";
  std::cout << "\t\t\t\t\t\n";
  std::cout << "The density of states is: " << finx << std::endl;

  subt5_go_back_to_main();
}


//------------------------------------------Main Function
//------------------------------------------Main Function
//------------------------------------------Main Function
//------------------------------------------Main Function
//------------------------------------------Main Function
//------------------------------------------Main Function
//------------------------------------------Main Function
//------------------------------------------Main Function

int main(int argc, char const *argv[]) {
  r.realmain_menu();
  return 0;
}
