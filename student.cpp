class student {
	int rollNumber;
	public:
	char* name;

	char const * getName() {
		return name;
	}

	void setName(char *n) {
		delete [] name;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	student(student const & s) {
		rollNumber = s.rollNumber;
		name = new char[strlen(s.name) + 1];
		strcpy(name, s.name);
	}
	
	student(char* n) {
		rollNumber = 0;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	~student() {
		delete [] name;
	}

/*
	student() {
		// put the logic to assign unique rollNumber
		rollNumber = 10203;
		name = NULL;
	}
	*/
	int getRollNumber() {
		return rollNumber;
	}

	void setRollNumber(int r) {
		if (r < 0) 
			return;
		// check if r is already assigned to someone else
		rollNumber = r;
	}


};
