#pragma once

#include "human.h"
#include <string>


class teacher : public human {
	
	public:
		teacher(
			std::string last_name,
			std::string name,
			std::string second_name,
			unsigned int work_time
		) : human(
			last_name,
			name,
			second_name
		) {
			this->work_time = work_time;
		}
		unsigned int get_work_time()
		{
			return this->work_time;
		}

		std::string get_full_name() override
		{
			std::ostringstream full_name;
			full_name << "Teacher: " << human::get_full_name();
			return full_name.str();
		}
	private:
		unsigned int work_time;
};