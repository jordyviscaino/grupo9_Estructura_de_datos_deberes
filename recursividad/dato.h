#include <iostream>

	using namespace std;

	class entrada{
	public:
	    entrada();
	    virtual char* entradaDatos(char* msg) = 0;
	protected:
	private:
	};
	
	entrada::entrada(){
	}