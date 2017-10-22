#include <iostream>
using namespace std;

enum weekDays {
	
  	mon=1, 
  	tue,
  	wed, 
  	thu, 
  	fri, 
  	sat, 
  	sun
};

enum months {
	
  	jan=1, 
	feb, 
	mar, 
	apr, 
	may, 
	jun, 
	jul, 
	aug, 
	sep, 
	oct, 
	nov, 
	decm
};

int main(){

  //enum example 1: Using enum with switch case
  int num;
  cout << "Enter a number between 1 to 7 : ";
  cin >> num;

  switch(num) {
    case mon:
      cout << num << "represents Monday";
      break;
    case tue:
      cout << num << "represents Tuesday";
      break;
    case wed:
      cout << num << "represents Wednesday";
      break;
	case thu:
      cout << num << "represents Thursday";
      break;
	case fri:
      cout << num << "represents Friday";
      break;
	case sat:
      cout << num << "represents Saturday";
      break;
	case sun:
      cout << num << "represents Sunday";
      break;
	default:
      cout << "Oops..Invalid Choice !!";
      break;
  }

  //enum example 2
  cout << "\n\nAssigned values to enum months: \n";
  for (int i=jan; i<=decm; i++) {
    cout << i << " ";
  }

  return 0;
}
