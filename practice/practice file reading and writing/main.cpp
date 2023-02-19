#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

std::ifstream file;
std::string time_[5][2];
std::string course_Name[5][2];
std::string course_Type[5][2];
int d_1 = 0, d_2 = 0;
std::string date[5] = { "Monday", "Tuesday", "Wednesday", "Thursday","Friday" };

void display()
{
	std::ofstream outfile;
	outfile.open("Schadule.txt");
	int k = 0;
	outfile << "|Day      |Time    |Class       |Type     |\n";
	outfile << "+---------+--------+------------+---------+\n";
	for (int i = 0; i < 5; i++) {
		outfile << "|" << std::setw(9) << std::left << date[k] << "|"; k++;
		for (int j = 0; j < 2; j++) {
			outfile << std::setw(8) << std::left << time_[i][j] << "|" <<
				std::setw(12) << course_Name[i][j] << "|" <<
				std::setw(9) << course_Type[i][j] << "|" << std::endl;
			if (j < 1)
				outfile << "|" << std::setw(10) << std::right << "|";
		}
		outfile << "+---------+--------+------------+---------+\n";

	}
}


int main() {

	file.open("data.txt");
	if (file.fail())
		std::cout << "Unable to open the data file!\n";
	else {
		while (!file.eof()) {
			std::getline(file, time_[d_1][d_2], ',');
			if (time_[d_1][d_2] != "*") {
				std::getline(file, course_Name[d_1][d_2], ',');
				std::getline(file, course_Type[d_1][d_2], '\n');
				d_2++;
				if (d_2 == 2) {
					d_2 = 0;
					d_1++;
				}
			}
			else {
				file.get();
				time_[d_1][d_2] = "";
				course_Name[d_1][d_2] = "";
				course_Type[d_1][d_2] = "";
				d_2++;
				if (d_2 == 2) {
					d_2 = 0;
					d_1++;
				}
			}

		}

	}
	display();

	return(0);
}