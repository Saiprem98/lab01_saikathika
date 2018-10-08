#include "Student.h"
#include <sstream>

Student::Student(int perm1, 
		 std::string lastName1, 
		 std::string firstAndMiddleNames1) {
  // THIS EMPTY CONSTRUCTOR IS A STUB
  // DELETE THESE COMMENTS AND REPLACE WITH APPROPRIATE CODE
  // REMEMBER: PURPOSE OF A CONSTRUCTOR IS TO INITIALIZE 
  // ALL DATA MEMBERS WITH REASONABLE VALUES
  perm = perm1;
  lastName = lastName1;
  firstAndMiddleNames = firstAndMiddleNames1;
}

int Student::getPerm() const { 
  return this->perm;
}

std::string Student::getLastName() const { 
  return this->lastName;
}

std::string Student::getFirstAndMiddleNames() const { 
  return this->firstAndMiddleNames;
}

std::string Student::getFullName() const { 
  std:: string full = this->firstAndMiddleNames+this->lastName; 
  return full;
}

std::string Student::toString() const { 
 
  
  // e.g. [12345,Smith,Malory Logan]
  std::ostringstream oss;
  
  oss << "[" 
      << this->getPerm() << ","
      << this->getLastName() << ","
      << this->getFirstAndMiddleNames() << "]";
  return oss.str();
 

} 
