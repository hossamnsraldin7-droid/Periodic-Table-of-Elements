#include <iostream>
#include <string>
using namespace std;
									
int main(){
	cout << "(:==========================PERIODIC TABLE OF ELEMENTS=============1567L========:)" << endl << endl;
	while (true) {
		string symbol;
		string name;
		short atomic_number = -1;
		short x;
		cout << "Choose the search option : "<<endl;
		cout << "1. Search by symbol" << endl;
		cout << "2. Search by name" << endl;
		cout << "3. Search by atomic number" << endl;
		cout << "4. Exit" << endl;
		cout << "===> "; cin >> x;
		if (x == 1) { cout << "Enter the symbol of element : ";
		cin >> symbol;
		}
		else if (x == 2) {
			cout << "Enter the name of element : ";
			cin >> name;
		}
		else if (x == 3) {
			cout << "Enter the atomic number of element : ";
			cin >> atomic_number;
		}
		else if (x == 4) {
			cout << "(:=======The operation has been completed. Thank you for using my program=======:)" << endl;
			break;
		}
		if (symbol == "h" || name == "hydrogen" || atomic_number == 1) {
			cout << "=======================================" << endl;
			cout << "name : Hydrogen" << endl;
			cout << "Symbol : H" << endl;
			cout << "Atomic Number : 1"<<endl;
			cout << "Atomic Mass : 1.008"<<endl;
			cout << "Group : 1"<<endl;
			cout << "Period : 1"<<endl;
			cout << "State: Gas"<<endl;
			cout << "Origin : Natural"<<endl;
			cout << "Category : Non-metal" << endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "he" || name == "helium" || atomic_number == 2) {
			cout << "=======================================" << endl;
			cout << "name : Helium" << endl;
			cout << "Symbol : He" << endl;
			cout << "Atomic Number : 2" << endl;
			cout << "Atomic Mass : 4.0026" << endl;
			cout << "Group : 18" << endl;
			cout << "Period : 1" << endl;
			cout << "State: Gas" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Noble Gas" << endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "li" || name == "lithium" || atomic_number == 3) {
			cout << "=======================================" << endl;
			cout << "name : Lithium" << endl;
			cout << "Symbol : Li" << endl;
			cout << "Atomic Number : 3" << endl;
			cout << "Atomic Mass : 6.94" << endl;
			cout << "Group : 1" << endl;
			cout << "Period : 2" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Alkali Metal" << endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "be" || name == "beryllium" || atomic_number == 4) {
			cout << "=======================================" << endl;
			cout << "name : Beryllium" << endl;
			cout << "Symbol : Be" << endl;
			cout << "Atomic Number : 4" << endl;
			cout << "Atomic Mass : 9.0122" << endl;
			cout << "Group : 2" << endl;
			cout << "Period : 2" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Alkaline Earth Metal" << endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "b" || name == "boron" || atomic_number == 5) {
			cout << "=======================================" << endl;
			cout<<"name : Boron"<<endl;
			cout << "Symbol : B" << endl;
			cout << "Atomic Number : 5" << endl;
			cout << "Atomic Mass : 10.81" << endl;
			cout << "Group : 13" << endl;
			cout << "Period : 2" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Metalloid"<< endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "c" || name == "carbon" || atomic_number == 6) {
			cout << "=======================================" << endl;
			cout<<"name : Carbon"<<endl;
			cout << "Symbol : C" << endl;
			cout << "Atomic Number : 6" << endl;
			cout << "Atomic Mass : 12.011" << endl;
			cout << "Group : 14" << endl;
			cout << "Period : 2" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Non-metal"<< endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "n" || name == "nitrogen" || atomic_number == 2) {
			cout << "=======================================" << endl;
			cout<<"name : Nitrogen"<<endl;
			cout << "Symbol : N" << endl;
			cout << "Atomic Number : 7" << endl;
			cout << "Atomic Mass : 10.007" << endl;
			cout << "Group : 15" << endl;
			cout << "Period : 2" << endl;
			cout << "State: Gas" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : non_metal"<< endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "o" || name == "oxygen" || atomic_number == 8) {
			cout << "=======================================" << endl;
			cout<<"name : Oxygen"<<endl;
			cout << "Symbol : O" << endl;
			cout << "Atomic Number : 8" << endl;
			cout << "Atomic Mass : 15.999" << endl;
			cout << "Group : 16" << endl;
			cout << "Period : 2" << endl;
			cout << "State: Gas" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : non_metal" << endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "f" || name == "fluorine" || atomic_number == 9) {
			cout << "=======================================" << endl;
			cout<<"name : Fluorine"<<endl;
			cout << "Symbol : F" << endl;
			cout << "Atomic Number : 9" << endl;
			cout << "Atomic Mass : 18.998" << endl;
			cout << "Group : 17" << endl;
			cout << "Period : 2" << endl;
			cout << "State: Gas" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : halogen" << endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "ne" || name == "neon" || atomic_number == 10) {
			cout << "=======================================" << endl;
			cout<<"name : Neon"<<endl;
			cout << "Symbol : Ne" << endl;
			cout << "Atomic Number : 10" << endl;
			cout << "Atomic Mass : 10.180" << endl;
			cout << "Group : 18" << endl;
			cout << "Period : 2" << endl;
			cout << "State: Gas" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Noble Gas"<< endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "na" || name == "sodium" || atomic_number == 11) {
			cout << "=======================================" << endl;
			cout<<"name : Sodium"<<endl;
			cout << "Symbol : Na" << endl;
			cout << "Atomic Number : 11" << endl;
			cout << "Atomic Mass : 22.99" << endl;
			cout << "Group : 1" << endl;
			cout << "Period : 3" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : metal" << endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "mg" || name == "magnesium" || atomic_number == 12) {
			cout << "=======================================" << endl;
			cout<<"name : Magnesium"<<endl;
			cout << "Symbol : Mg" << endl;
			cout << "Atomic Number : 12" << endl;
			cout << "Atomic Mass : 24.31" << endl;
			cout << "Group : 2" << endl;
			cout << "Period : 3" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "al" || name == "aluminium" || atomic_number == 13) {
			cout << "=======================================" << endl;
			cout<<"name : Aluminium"<<endl;
			cout << "Symbol : Al" << endl;
			cout << "Atomic Number : 13" << endl;
			cout << "Atomic Mass : 26.98" << endl;
			cout << "Group : 13" << endl;
			cout << "Period : 3" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : metal" << endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "si" || name == "silicon" || atomic_number == 14) {
			cout << "=======================================" << endl;
			cout<<"name : Silicon"<<endl;
			cout << "Symbol : Si" << endl;
			cout << "Atomic Number : 14" << endl;
			cout << "Atomic Mass : 28.09" << endl;
			cout << "Group : 14" << endl;
			cout << "Period : 3" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "=======================================" << endl << endl;
		}
		else if (symbol == "p" || name == "phosphorus" || atomic_number == 15) {
			cout << "=======================================" << endl;
			cout<<"name : Phosphorus"<<endl;
			cout << "Symbol : P" << endl;
			cout << "Atomic Number : 15" << endl;
			cout << "Atomic Mass : 30.97" << endl;
			cout << "Group : 15" << endl;
			cout << "Period : 3" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "s" || name == "sulfur" || atomic_number == 16) {
				cout << "=======================================" << endl;
				cout << "name : Sulfur" << endl;
				cout << "Symbol : S" << endl;
				cout << "Atomic Number : 16" << endl;
				cout << "Atomic Mass : 32.06" << endl;
				cout << "Group : 16" << endl;
				cout << "Period : 3" << endl;
				cout << "State: solid" << endl;
				cout << "Origin : Natural" << endl;
				cout << "=======================================" << endl << endl;
				}
		else if (symbol == "cl" || name == "chlorine" || atomic_number == 17) {
			cout << "=======================================" << endl;
			cout << "name : Chlorine" << endl;
			cout << "Symbol : Cl" << endl;
			cout << "Atomic Number : 17" << endl;
			cout << "Atomic Mass : 35.45" << endl;
			cout << "Group : 17" << endl;
			cout << "Period : 3" << endl;
			cout << "State: Gas" << endl;
			cout << "Origin : Natural"<< endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "ar" || name == "argon" || atomic_number == 18) {
			cout << "=======================================" << endl;
			cout << "name : Argon" << endl;
			cout << "Symbol : Ar" << endl;
			cout << "Atomic Number : 18" << endl;
			cout << "Atomic Mass : 39.95" << endl;
			cout << "Group : 18" << endl;
			cout << "Period : 3" << endl;
			cout << "State: Gas" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Noble Gas" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "k" || name == "potassium" || atomic_number == 19) {
			cout << "=======================================" << endl;
			cout << "name : Potassium" << endl;
			cout << "Symbol : K" << endl;
			cout << "Atomic Number : 19" << endl;
			cout << "Atomic Mass : 39.10" << endl;
			cout << "Group : 1" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "ca" || name == "calcium" || atomic_number == 20) {
			cout << "=======================================" << endl;
			cout << "name : Calcium" << endl;
			cout << "Symbol : Ca" << endl;
			cout << "Atomic Number : 20" << endl;
			cout << "Atomic Mass : 20.08" << endl;
			cout << "Group : 2" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "sc" || name == "scandium" || atomic_number == 21) {
			cout << "=======================================" << endl;
			cout << "name : Scandium" << endl;
			cout << "Symbol : Sc" << endl;
			cout << "Atomic Number : 21" << endl;
			cout << "Atomic Mass : 44.96" << endl;
			cout << "Group : 3" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Transition Metal" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "ti" || name == "titanium" || atomic_number == 22) {
			cout << "=======================================" << endl;
			cout << "name : Titanium" << endl;
			cout << "Symbol : Ti" << endl;
			cout << "Atomic Number : 22" << endl;
			cout << "Atomic Mass : 47.87" << endl;
			cout << "Group : 4" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Transition Metal" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "v" || name == "vanadium" || atomic_number == 23) {
			cout << "=======================================" << endl;
			cout << "name : Vanadium" << endl;
			cout << "Symbol : V" << endl;
			cout << "Atomic Number : 23" << endl;
			cout << "Atomic Mass : 50.94" << endl;
			cout << "Group : 5" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Transition Metal" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "cr" || name == "chromium" || atomic_number == 24) {
			cout << "=======================================" << endl;
			cout << "name : Chromium" << endl;
			cout << "Symbol : Cr" << endl;
			cout << "Atomic Number : 24" << endl;
			cout << "Atomic Mass : 51.996" << endl;
			cout << "Group : 6" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Transition Metal"<< endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "mn" || name == "manganese" || atomic_number == 25) {
			cout << "=======================================" << endl;
			cout << "name : Manganese" << endl;
			cout << "Symbol : Mn" << endl;
			cout << "Atomic Number : 25" << endl;
			cout << "Atomic Mass : 54.94" << endl;
			cout << "Group : 7" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Transition Metal" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "fe" || name == "iron" || atomic_number == 26) {
			cout << "=======================================" << endl;
			cout << "name : Iron" << endl;
			cout << "Symbol : Fe" << endl;
			cout << "Atomic Number : 26" << endl;
			cout << "Atomic Mass : 55.85" << endl;
			cout << "Group : 8" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Transition Metal" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "co" || name == "cobalt" || atomic_number == 27) {
				cout << "=======================================" << endl;
				cout << "name : Cobalt" << endl;
				cout << "Symbol : Co" << endl;
				cout << "Atomic Number : 27" << endl;
				cout << "Atomic Mass : 58.93" << endl;
				cout << "Group : 9" << endl;
				cout << "Period : 4" << endl;
				cout << "State: solid" << endl;
				cout << "Origin : Natural" << endl;
				cout << "Category : Transition Metal" << endl;
				cout << "=======================================" << endl << endl;
				}
		else if (symbol == "ni" || name == "nickel" || atomic_number == 28) {
			cout << "=======================================" << endl;
			cout << "name : Nickel" << endl;
			cout << "Symbol : Ni" << endl;
			cout << "Atomic Number : 28" << endl;
			cout << "Atomic Mass : 58.69" << endl;
			cout << "Group : 10" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Transition Metal"<< endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "cu" || name == "copper" || atomic_number == 29) {
			cout << "=======================================" << endl;
			cout << "name : Copper" << endl;
			cout << "Symbol : Cu" << endl;
			cout << "Atomic Number : 29" << endl;
			cout << "Atomic Mass : 63.55" << endl;
			cout << "Group : 11" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Transition Metal" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "zn" || name == "zinc" || atomic_number == 30) {
			cout << "=======================================" << endl;
			cout << "name : Zinc" << endl;
			cout << "Symbol : Zn" << endl;
			cout << "Atomic Number : 30" << endl;
			cout << "Atomic Mass : 65.38" << endl;
			cout << "Group : 12" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Transition Metal" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "ga" || name == "gallium" || atomic_number == 31) {
			cout << "=======================================" << endl;
			cout << "name : Gallium" << endl;
			cout << "Symbol : Ga" << endl;
			cout << "Atomic Number : 31" << endl;
			cout << "Atomic Mass : 69.72" << endl;
			cout << "Group : 13" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Post-transition Metal" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "ge" || name == "germanium" || atomic_number == 32) {
			cout << "=======================================" << endl;
			cout << "name : Germanium" << endl;
			cout << "Symbol : Ge" << endl;
			cout << "Atomic Number : 32" << endl;
			cout << "Atomic Mass : 72.63" << endl;
			cout << "Group : 14" << endl;
			cout << "Period : 4" << endl;
			cout << "State: solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Metalloid"<< endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "as" || name == "arsenic" || atomic_number == 33) {
			cout << "=======================================" << endl;
			cout << "name : Arsenic" << endl;
			cout << "Symbol : As" << endl;
			cout << "Atomic Number : 33" << endl;
			cout << "Atomic Mass : 74.92" << endl;
			cout << "Group : 15" << endl;
			cout << "Period : 4" << endl;
			cout << "State: Solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Metalloid" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "se" || name == "selenium" || atomic_number == 34) {
			cout << "=======================================" << endl;
			cout << "name : Selenium" << endl;
			cout << "Symbol : Se" << endl;
			cout << "Atomic Number : 34" << endl;
			cout << "Atomic Mass : 78.96" << endl;
			cout << "Group : 16" << endl;
			cout << "Period : 4" << endl;
			cout << "State: Solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Nonmetal" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "br" || name == "bromine" || atomic_number == 35) {
			cout << "=======================================" << endl;
			cout << "name : Bromine" << endl;
			cout << "Symbol : Br" << endl;
			cout << "Atomic Number : 35" << endl;
			cout << "Atomic Mass : 79.90" << endl;
			cout << "Group : 17" << endl;
			cout << "Period : 4" << endl;
			cout << "State: liquid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Halogen" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "kr" || name == "krypton" || atomic_number == 36) {
			cout << "=======================================" << endl;
			cout << "name : Krypton" << endl;
			cout << "Symbol : Kr" << endl;
			cout << "Atomic Number : 36" << endl;
			cout << "Atomic Mass : 83.798" << endl;
			cout << "Group : 18" << endl;
			cout << "Period : 4" << endl;
			cout << "State: Gas" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Noble Gas" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "rb" || name == "rubidium" || atomic_number == 37) {
			cout << "=======================================" << endl;
			cout << "name : Rubidium" << endl;
			cout << "Symbol : Rb" << endl;
			cout << "Atomic Number : 37" << endl;
			cout << "Atomic Mass : 85.4678" << endl;
			cout << "Group : 1" << endl;
			cout << "Period : 5" << endl;
			cout << "State: Solid" << endl;
			cout << "Origin : Natural" << endl;
			cout << "Category : Alkali Metal" << endl;
			cout << "=======================================" << endl << endl;
			}
		else if (symbol == "sr" || name == "strontium" || atomic_number == 38) {
				cout << "=======================================" << endl;
				cout << "name : Strontium" << endl;
				cout << "Symbol : Sr" << endl;
				cout << "Atomic Number : 38" << endl;
				cout << "Atomic Mass : 87.62" << endl;
				cout << "Group : 2" << endl;
				cout << "Period : 5" << endl;
				cout << "State: Solid" << endl;
				cout << "Origin : Natural" << endl;
				cout << "Category : Alkaline Earth Metal" << endl;
				cout << "=======================================" << endl << endl;
				}
		else if (symbol == "y" || name == "yttrium" || atomic_number == 39) {
					cout << "=======================================" << endl;
					cout << "name : Yttrium" << endl;
					cout << "Symbol : Y" << endl;
					cout << "Atomic Number : 39" << endl;
					cout << "Atomic Mass : 88.90584" << endl;
					cout << "Group : 3" << endl;
					cout << "Period : 5" << endl;
					cout << "State: Solid" << endl;
					cout << "Origin : Natural" << endl;
					cout << "Category : Transition Metal" << endl;
					cout << "=======================================" << endl << endl;
					}
		else if (symbol == "zr" || name == "zirconium" || atomic_number == 40) {
						cout << "=======================================" << endl;
						cout << "name : Zirconium" << endl;
						cout << "Symbol : Zr" << endl;
						cout << "Atomic Number : 40" << endl;
						cout << "Atomic Mass : 91.224" << endl;
						cout << "Group : 4" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
	else if (symbol == "nb" || name == "niobium" || atomic_number == 41) {
						cout << "=======================================" << endl;
						cout << "name : Niobium" << endl;
						cout << "Symbol : Nb" << endl;
						cout << "Atomic Number : 41" << endl;
						cout << "Atomic Mass : 92.90637" << endl;
						cout << "Group : 5" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "mo" || name == "molybdenum" || atomic_number == 42) {
						cout << "=======================================" << endl;		
						cout << "name : Molybdenum" << endl;
						cout << "Symbol : Mo" << endl;
						cout << "Atomic Number : 42" << endl;
						cout << "Atomic Mass : 95.95" << endl;
						cout << "Group : 6" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "tc" || name == "technetium" || atomic_number == 43) {
						cout << "=======================================" << endl;
						cout << "name : Technetium" << endl;
						cout << "Symbol : Tc" << endl;
						cout << "Atomic Number : 43" << endl;
						cout << "Atomic Mass : 98" << endl;
						cout << "Group : 7" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Transition Metal"<< endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "ru" || name == "ruthenium" || atomic_number == 44) {
						cout << "=======================================" << endl;	
						cout << "name : Ruthenium" << endl;
						cout << "Symbol : Ru" << endl;
						cout << "Atomic Number : 44" << endl;
						cout << "Atomic Mass : 101.07" << endl;
						cout << "Group : 8" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal"<< endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "rh" || name == "rhodium" || atomic_number == 45) {
	                    cout << "=======================================" << endl;
						cout << "name : Rhodium" << endl;
						cout << "Symbol : Rh" << endl;
						cout << "Atomic Number : 45" << endl;
						cout << "Atomic Mass : 102.90550" << endl;
						cout << "Group : 9" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "pd" || name == "palladium" || atomic_number == 46) {
						cout << "=======================================" << endl;
						cout << "name : Palladium" << endl;
						cout << "Symbol : Pd" << endl;
						cout << "Atomic Number : 46" << endl;
						cout << "Atomic Mass : 106.42" << endl;
						cout << "Group : 10" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "ag" || name == "silver" || atomic_number == 47) {
	                    cout << "=======================================" << endl;
						cout << "name : Silver" << endl;
						cout << "Symbol : Ag" << endl;
						cout << "Atomic Number : 47" << endl;
						cout << "Atomic Mass : 107.8682" << endl;
						cout << "Group : 11" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "cd" || name == "cadmium" || atomic_number == 48) {
						cout << "=======================================" << endl;
						cout << "name : Cadmium" << endl;
						cout << "Symbol : Cd" << endl;
						cout << "Atomic Number : 48" << endl;
						cout << "Atomic Mass : 112.414" << endl;
						cout << "Group : 12" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "in" || name == "indium" || atomic_number == 49) {
						cout << "=======================================" << endl;
						cout << "name : Indium" << endl;
						cout << "Symbol : In" << endl;
						cout << "Atomic Number : 49" << endl;
						cout << "Atomic Mass : 114.818" << endl;
						cout << "Group : 13" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Post-Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "sn" || name == "tin" || atomic_number == 50) {
						cout << "=======================================" << endl;
						cout << "name : Tin" << endl;
						cout << "Symbol : Sn" << endl;
						cout << "Atomic Number : 50" << endl;
						cout << "Atomic Mass : 118.710" << endl;
						cout << "Group : 14" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Post-Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "sb" || name == "antimony" || atomic_number == 51) {
						cout << "=======================================" << endl;
						cout << "name : Antimony" << endl;
						cout << "Symbol : Sb" << endl;
						cout << "Atomic Number : 51" << endl;
						cout << "Atomic Mass : 121.760" << endl;
						cout << "Group : 15" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Metalloid" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "te" || name == "tellurium" || atomic_number == 52) {
						cout << "=======================================" << endl;
						cout << "name : Tellurium" << endl;
						cout << "Symbol : Te" << endl;
						cout << "Atomic Number : 52" << endl;
						cout << "Atomic Mass : 127.60" << endl;
						cout << "Group : 16" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Metalloid" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "i" || name == "iodine" || atomic_number == 53) {
						cout << "=======================================" << endl;
						cout << "name : Iodine" << endl;
						cout << "Symbol : I" << endl;
						cout << "Atomic Number : 53" << endl;
						cout << "Atomic Mass : 126.904" << endl;
						cout << "Group : 17" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Halogen"<< endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "xe" || name == "xenon" || atomic_number == 54) {
						cout << "=======================================" << endl;
						cout << "name : Xenon" << endl;
						cout << "Symbol : Xe" << endl;
						cout << "Atomic Number : 54" << endl;
						cout << "Atomic Mass : 131.293" << endl;
						cout << "Group : 18" << endl;
						cout << "Period : 5" << endl;
						cout << "State: Gas" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Noble Gas" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "cs" || name == "cesium" || atomic_number == 55) {
						cout << "=======================================" << endl;
						cout << "name : Cesium" << endl;
						cout << "Symbol : Cs" << endl;
						cout << "Atomic Number : 55" << endl;
						cout << "Atomic Mass : 132.905" << endl;
						cout << "Group : 1" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Alkali Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "ba" || name == "barium" || atomic_number == 56) {
						cout << "=======================================" << endl;
						cout << "name : Barium" << endl;
						cout << "Symbol : Ba" << endl;
						cout << "Atomic Number : 56" << endl;
						cout << "Atomic Mass : 137.327" << endl;
						cout << "Group : 2" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Alkaline Earth Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "la" || name == "lanthanum" || atomic_number == 57) {
						cout << "=======================================" << endl;
						cout << "name : Lanthanum" << endl;
						cout << "Symbol : La" << endl;
						cout << "Atomic Number : 57" << endl;
						cout << "Atomic Mass : 138.905" << endl;
						cout << "Group : 3" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "ce" || name == "cerium" || atomic_number == 58) {
						cout << "=======================================" << endl;
						cout << "name : Cerium" << endl;
						cout << "Symbol : Ce" << endl;
						cout << "Atomic Number : 58" << endl;
						cout << "Atomic Mass : 140.116" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "pr" || name == "praseodymium" || atomic_number == 59) {
						cout << "=======================================" << endl;
						cout << "name : Praseodymium" << endl;
						cout << "Symbol : Pr" << endl;
						cout << "Atomic Number : 59" << endl;
						cout << "Atomic Mass : 140.907" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "nd" || name == "neodymium" || atomic_number == 60) {
						cout << "=======================================" << endl;
						cout << "name : Neodymium" << endl;
						cout << "Symbol : Nd" << endl;
						cout << "Atomic Number : 60" << endl;
						cout << "Atomic Mass : 144.242" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "pm" || name == "promethium" || atomic_number == 61) {
						cout << "=======================================" << endl;
						cout << "name : Promethium" << endl;
						cout << "Symbol : Pm" << endl;
						cout << "Atomic Number : 61" << endl;
						cout << "Atomic Mass : 145" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "sm" || name == "samarium" || atomic_number == 62) {
						cout << "=======================================" << endl;
						cout << "name : Samarium" << endl;
						cout << "Symbol : Sm" << endl;
						cout << "Atomic Number : 62" << endl;
						cout << "Atomic Mass : 150.36" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "eu" || name == "europium" || atomic_number == 63) {
						cout << "=======================================" << endl;
						cout << "name : Europium" << endl;
						cout << "Symbol : Eu" << endl;
						cout << "Atomic Number : 63" << endl;
						cout << "Atomic Mass : 151.964" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "gd" || name == "gadolinium" || atomic_number == 64) {
						cout << "=======================================" << endl;
						cout << "name : Gadolinium" << endl;
						cout << "Symbol : Gd" << endl;
						cout << "Atomic Number : 64" << endl;
						cout << "Atomic Mass : 157.25" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide"<< endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "tb" || name == "terbium" || atomic_number == 65) {
						cout << "=======================================" << endl;
						cout << "name : Terbium" << endl;
						cout << "Symbol : Tb" << endl;
						cout << "Atomic Number : 65" << endl;
						cout << "Atomic Mass : 158.925" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "dy" || name == "dysprosium" || atomic_number == 66) {
						cout << "=======================================" << endl;
						cout << "name : Dysprosium" << endl;
						cout << "Symbol : Dy" << endl;
						cout << "Atomic Number : 66" << endl;
						cout << "Atomic Mass : 162.5" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "ho" || name == "holmium" || atomic_number == 67) {
						cout << "=======================================" << endl;
						cout << "name : Holmium" << endl;
						cout << "Symbol : Ho" << endl;
						cout << "Atomic Number : 67" << endl;
						cout << "Atomic Mass : 164.930" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "er" || name == "erbium" || atomic_number == 68) {
						cout << "=======================================" << endl;
						cout << "name : Erbium" << endl;
						cout << "Symbol : Er" << endl;
						cout << "Atomic Number : 68" << endl;
						cout << "Atomic Mass : 167.259" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "tm" || name == "thulium" || atomic_number == 69) {
						cout << "=======================================" << endl;
						cout << "name : Thulium" << endl;
						cout << "Symbol : Tm" << endl;
						cout << "Atomic Number : 69" << endl;
						cout << "Atomic Mass : 168.934" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "yb" || name == "ytterbium" || atomic_number == 70) {
						cout << "=======================================" << endl;
						cout << "name : Ytterbium" << endl;
						cout << "Symbol : Yb" << endl;
						cout << "Atomic Number : 70" << endl;
						cout << "Atomic Mass : 173.045" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "lu" || name == "lutetium" || atomic_number == 71) {
						cout << "=======================================" << endl;
						cout << "name : Lutetium" << endl;
						cout << "Symbol : Lu" << endl;
						cout << "Atomic Number : 71" << endl;
						cout << "Atomic Mass : 174.966" << endl;
						cout << "Group : lanthanides" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Lanthanide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "hf" || name == "hafnium" || atomic_number == 72) {
						cout << "=======================================" << endl;
						cout << "name : Hafnium" << endl;
						cout << "Symbol : Hf" << endl;
						cout << "Atomic Number : 72" << endl;
						cout << "Atomic Mass : 178.49" << endl;
						cout << "Group : 4" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "ta" || name == "tantalum" || atomic_number == 73) {
						cout << "=======================================" << endl;
						cout << "name : Tantalum" << endl;
						cout << "Symbol : Ta" << endl;
						cout << "Atomic Number : 73" << endl;
						cout << "Atomic Mass : 180.947" << endl;
						cout << "Group : 5" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "w" || name == "tungsten" || atomic_number == 74) {
						cout << "=======================================" << endl;
						cout << "name : Tungsten" << endl;
						cout << "Symbol : W" << endl;
						cout << "Atomic Number : 74" << endl;
						cout << "Atomic Mass : 183.84" << endl;
						cout << "Group : 6" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "re" || name == "rhenium" || atomic_number == 75) {
						cout << "=======================================" << endl;
						cout << "name : Rhenium" << endl;
						cout << "Symbol : Re" << endl;
						cout << "Atomic Number : 75" << endl;
						cout << "Atomic Mass : 186.207" << endl;
						cout << "Group : 7" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "os" || name == "osmium" || atomic_number == 76) {
						cout << "=======================================" << endl;
						cout << "name : Osmium" << endl;
						cout << "Symbol : Os" << endl;
						cout << "Atomic Number : 76" << endl;
						cout << "Atomic Mass : 190.23" << endl;
						cout << "Group : 8" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "ir" || name == "iridium" || atomic_number == 77) {
						cout << "=======================================" << endl;
						cout << "name : Iridium" << endl;
						cout << "Symbol : Ir" << endl;
						cout << "Atomic Number : 77" << endl;
						cout << "Atomic Mass : 192.217" << endl;
						cout << "Group : 9" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "pt" || name == "platinum" || atomic_number == 78) {
						cout << "=======================================" << endl;
						cout << "name : Platinum" << endl;
						cout << "Symbol : Pt" << endl;
						cout << "Atomic Number : 78" << endl;
						cout << "Atomic Mass : 195.084" << endl;
						cout << "Group : 10" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "au" || name == "gold" || atomic_number == 79) {
						cout << "=======================================" << endl;
						cout << "name : Gold" << endl;
						cout << "Symbol : Au" << endl;
						cout << "Atomic Number : 79" << endl;
						cout << "Atomic Mass : 196.967" << endl;
						cout << "Group : 11" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "hg" || name == "mercury" || atomic_number == 80) {
						cout << "=======================================" << endl;
						cout << "name : Mercury" << endl;
						cout << "Symbol : Hg" << endl;
						cout << "Atomic Number : 80" << endl;
						cout << "Atomic Mass : 200.59" << endl;
						cout << "Group : 12" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Liquid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "tl" || name == "thallium" || atomic_number == 81) {
						cout << "=======================================" << endl;
						cout << "name : Thallium" << endl;
						cout << "Symbol : Tl" << endl;
						cout << "Atomic Number : 81" << endl;
						cout << "Atomic Mass : 204.38" << endl;
						cout << "Group : 13" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Post-Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "pb" || name == "lead" || atomic_number == 82) {
						cout << "=======================================" << endl;
						cout << "name : Lead" << endl;
						cout << "Symbol : Pb" << endl;
						cout << "Atomic Number : 82" << endl;
						cout << "Atomic Mass : 207.2" << endl;
						cout << "Group : 14" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Post-Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "bi" || name == "bismuth" || atomic_number == 83) {
						cout << "=======================================" << endl;
						cout << "name : Bismuth" << endl;
						cout << "Symbol : Bi" << endl;
						cout << "Atomic Number : 83" << endl;
						cout << "Atomic Mass : 208.980" << endl;
						cout << "Group : 15" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Post-Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "po" || name == "polonium" || atomic_number == 84) {
						cout << "=======================================" << endl;
						cout << "name : Polonium" << endl;
						cout << "Symbol : Po" << endl;
						cout << "Atomic Number : 84" << endl;
						cout << "Atomic Mass : 209" << endl;
						cout << "Group : 16" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Post-Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "at" || name == "astatine" || atomic_number == 85) {
						cout << "=======================================" << endl;
						cout << "name : Astatine" << endl;
						cout << "Symbol : At" << endl;
						cout << "Atomic Number : 85" << endl;
						cout << "Atomic Mass : 210" << endl;
						cout << "Group : 17" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Halogen" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "rn" || name == "radon" || atomic_number == 86) {
						cout << "=======================================" << endl;
						cout << "name : Radon" << endl;
						cout << "Symbol : Rn" << endl;
						cout << "Atomic Number : 86" << endl;
						cout << "Atomic Mass : 222" << endl;
						cout << "Group : 18" << endl;
						cout << "Period : 6" << endl;
						cout << "State: Gas" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Noble Gas"<< endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "fr" || name == "francium" || atomic_number == 87) {
						cout << "=======================================" << endl;
						cout << "name : Francium" << endl;
						cout << "Symbol : Fr" << endl;
						cout << "Atomic Number : 87" << endl;
						cout << "Atomic Mass : 223" << endl;
						cout << "Group : 1" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Alkali Metal" <<endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "ra" || name == "radium" || atomic_number == 88) {
						cout << "=======================================" << endl;
						cout << "name : Radium" << endl;
						cout << "Symbol : Ra" << endl;
						cout << "Atomic Number : 88" << endl;
						cout << "Atomic Mass : 226" << endl;
						cout << "Group : 2" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Alkaline Earth Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "ac" || name == "actinium" || atomic_number == 89) {
						cout << "=======================================" << endl;
						cout << "name : Actinium" << endl;
						cout << "Symbol : Ac" << endl;
						cout << "Atomic Number : 89" << endl;
						cout << "Atomic Mass : 227" << endl;
						cout << "Group : 3" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "th" || name == "thorium" || atomic_number == 90) {
						cout << "=======================================" << endl;
						cout << "name : Thorium" << endl;
						cout << "Symbol : Th" << endl;
						cout << "Atomic Number : 90" << endl;
						cout << "Atomic Mass : 232.038" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "pa" || name == "protactinium" || atomic_number == 91) {
						cout << "=======================================" << endl;
						cout << "name : Protactinium" << endl;
						cout << "Symbol : Pa" << endl;
						cout << "Atomic Number : 91" << endl;
						cout << "Atomic Mass : 231.035" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "u" || name == "uranium" || atomic_number == 92) {
						cout << "=======================================" << endl;
						cout << "name : Uranium" << endl;
						cout << "Symbol : U" << endl;
						cout << "Atomic Number : 92" << endl;
						cout << "Atomic Mass : 238.028" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Natural" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "np" || name == "neptunium" || atomic_number == 93) {
						cout << "=======================================" << endl;
						cout << "name : Neptunium" << endl;
						cout << "Symbol : Np" << endl;
						cout << "Atomic Number : 93" << endl;
						cout << "Atomic Mass : 237" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "pu" || name == "plutonium" || atomic_number == 94) {
						cout << "=======================================" << endl;
						cout << "name : Plutonium" << endl;
						cout << "Symbol : Pu" << endl;
						cout << "Atomic Number : 94" << endl;
						cout << "Atomic Mass : 244" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "am" || name == "americium" || atomic_number == 95) {
						cout << "=======================================" << endl;
						cout << "name : Americium" << endl;
						cout << "Symbol : Am" << endl;
						cout << "Atomic Number : 95" << endl;
						cout << "Atomic Mass : 243" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "cm" || name == "curium" || atomic_number == 96) {
						cout << "=======================================" << endl;
						cout << "name : Curium" << endl;
						cout << "Symbol : Cm" << endl;
						cout << "Atomic Number : 96" << endl;
						cout << "Atomic Mass : 247" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "bk" || name == "berkelium" || atomic_number == 97) {
						cout << "=======================================" << endl;
						cout << "name : Berkelium" << endl;
						cout << "Symbol : Bk" << endl;
						cout << "Atomic Number : 97" << endl;
						cout << "Atomic Mass : 247" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "cf" || name == "californium" || atomic_number == 98) {
						cout << "=======================================" << endl;
						cout << "name : Californium" << endl;
						cout << "Symbol : Cf" << endl;
						cout << "Atomic Number : 98" << endl;
						cout << "Atomic Mass : 251" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "es" || name == "einsteinium" || atomic_number == 99) {
						cout << "=======================================" << endl;
						cout << "name : Einsteinium" << endl;
						cout << "Symbol : Es" << endl;
						cout << "Atomic Number : 99" << endl;
						cout << "Atomic Mass : 252" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "fm" || name == "fermium" || atomic_number == 100) {
						cout << "=======================================" << endl;
						cout << "name : Fermium" << endl;
						cout << "Symbol : Fm" << endl;
						cout << "Atomic Number : 100" << endl;
						cout << "Atomic Mass : 257" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "md" || name == "mendelevium" || atomic_number == 101) {
						cout << "=======================================" << endl;
						cout << "name : Mendelevium" << endl;
						cout << "Symbol : Md" << endl;
						cout << "Atomic Number : 101" << endl;
						cout << "Atomic Mass : 258" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "no" || name == "nobelium" || atomic_number == 102) {
						cout << "=======================================" << endl;
						cout << "name : Nobelium" << endl;
						cout << "Symbol : No" << endl;
						cout << "Atomic Number : 102" << endl;
						cout << "Atomic Mass : 259" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "lr" || name == "lawrencium" || atomic_number == 103) {
						cout << "=======================================" << endl;
						cout << "name : Lawrencium" << endl;
						cout << "Symbol : Lr" << endl;
						cout << "Atomic Number : 103" << endl;
						cout << "Atomic Mass : 262" << endl;
						cout << "Group : actinides" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Actinide" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "rf" || name == "rutherfordium" || atomic_number == 104) {
						cout << "=======================================" << endl;
						cout << "name : Rutherfordium" << endl;
						cout << "Symbol : Rf" << endl;
						cout << "Atomic Number : 104" << endl;
						cout << "Atomic Mass : 267" << endl;
						cout << "Group : 4" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "db" || name == "dubnium" || atomic_number == 105) {
						cout << "=======================================" << endl;
						cout << "name : Dubnium" << endl;
						cout << "Symbol : Db" << endl;
						cout << "Atomic Number : 105" << endl;
						cout << "Atomic Mass : 268" << endl;
						cout << "Group : 5" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "sg" || name == "seaborgium" || atomic_number == 106) {
						cout << "=======================================" << endl;
						cout << "name : Seaborgium" << endl;
						cout << "Symbol : Sg" << endl;
						cout << "Atomic Number : 106" << endl;
						cout << "Atomic Mass : 271" << endl;
						cout << "Group : 6" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "bh" || name == "bohrium" || atomic_number == 107) {
						cout << "=======================================" << endl;
						cout << "name : Bohrium" << endl;
						cout << "Symbol : Bh" << endl;
						cout << "Atomic Number : 107" << endl;
						cout << "Atomic Mass : 270" << endl;
						cout << "Group : 7" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "hs" || name == "hassium" || atomic_number == 108) {
						cout << "=======================================" << endl;
						cout << "name : Hassium" << endl;
						cout << "Symbol : Hs" << endl;
						cout << "Atomic Number : 108" << endl;
						cout << "Atomic Mass : 277" << endl;
						cout << "Group : 8" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "mt" || name == "meitnerium" || atomic_number == 109) {
						cout << "=======================================" << endl;
						cout << "name : Meitnerium" << endl;
						cout << "Symbol : Mt" << endl;
						cout << "Atomic Number : 109" << endl;
						cout << "Atomic Mass : 278" << endl;
						cout << "Group : 9" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "ds" || name == "darmstadtium" || atomic_number == 110) {
						cout << "=======================================" << endl;
						cout << "name : Darmstadtium" << endl;
						cout << "Symbol : Ds" << endl;
						cout << "Atomic Number : 110" << endl;
						cout << "Atomic Mass : 281" << endl;
						cout << "Group : 10" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "rg" || name == "roentgenium" || atomic_number == 111) {
						cout << "=======================================" << endl;
						cout << "name : Roentgenium" << endl;
						cout << "Symbol : Rg" << endl;
						cout << "Atomic Number : 111" << endl;
						cout << "Atomic Mass : 282" << endl;
						cout << "Group : 11" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "cn" || name == "copernicium" || atomic_number == 112) {
						cout << "=======================================" << endl;
						cout << "name : Copernicium" << endl;
						cout << "Symbol : Cn" << endl;
						cout << "Atomic Number : 112" << endl;
						cout << "Atomic Mass : 285" << endl;
						cout << "Group : 12" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "nh" || name == "nihonium" || atomic_number == 113) {
						cout << "=======================================" << endl;
						cout << "name : Nihonium" << endl;
						cout << "Symbol : Nh" << endl;
						cout << "Atomic Number : 113" << endl;
						cout << "Atomic Mass : 286" << endl;
						cout << "Group : 13" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Post-Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "fl" || name == "flerovium" || atomic_number == 114) {
						cout << "=======================================" << endl;
						cout << "name : Flerovium" << endl;
						cout << "Symbol : Fl" << endl;
						cout << "Atomic Number : 114" << endl;
						cout << "Atomic Mass : 289" << endl;
						cout << "Group : 14" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Post-Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "mc" || name == "moscovium" || atomic_number == 115) {
						cout << "=======================================" << endl;
						cout << "name : Moscovium" << endl;
						cout << "Symbol : Mc" << endl;
						cout << "Atomic Number : 115" << endl;
						cout << "Atomic Mass : 288" << endl;
						cout << "Group : 15" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Post-Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "lv" || name == "livermorium" || atomic_number == 116) {
						cout << "=======================================" << endl;
						cout << "name : Livermorium" << endl;
						cout << "Symbol : Lv" << endl;
						cout << "Atomic Number : 116" << endl;
						cout << "Atomic Mass : 293" << endl;
						cout << "Group : 16" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Post-Transition Metal" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "ts" || name == "tennessine" || atomic_number == 117) {
						cout << "=======================================" << endl;
						cout << "name : Tennessine" << endl;
						cout << "Symbol : Ts" << endl;
						cout << "Atomic Number : 117" << endl;
						cout << "Atomic Mass : 294" << endl;
						cout << "Group : 17" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Halogen" << endl;
						cout << "=======================================" << endl << endl;
						}
else if (symbol == "og" || name == "oganesson" || atomic_number == 118) {
						cout << "=======================================" << endl;
						cout << "name : Oganesson" << endl;
						cout << "Symbol : Og" << endl;
						cout << "Atomic Number : 118" << endl;
						cout << "Atomic Mass : 294" << endl;
						cout << "Group : 18" << endl;
						cout << "Period : 7" << endl;
						cout << "State: Solid" << endl;
						cout << "Origin : Synthetic" << endl;
						cout << "Category : Noble Gas" << endl ;
						cout << "=======================================" << endl << endl;
						}
				else {
						cout << "=========================================================" << endl;
						cout << "Element not found. Please check your input and try again." << endl;
						cout << "=========================================================" << endl << endl;
						}
	 /*while*/
	}
/*int main*/
}