#include<iostream>
using namespace std;

class student {
  private:
    string name;
    int marks[1000];
    int total;

  public:
    // Assign Marks of student
    void assign(int i) {
      cout << "Enter the name of Student:\n";
      cin >> name;
      for (int j = 0; j < i; j++) {
        cout << "Enter "<<j+1<<" mark: ";
        cin >> marks[j];
      }
    }

    // Display the Marks and Total marks on screen
    void disp(int i) {
      cout << "Marks of " << name << ":\n";
      for (int j = 0; j < i; j++) {
        cout << j + 1 << ". " << marks[j] << endl;
      }
      cout << "Total: " << total << endl;
    }

 	// Calculate the Total marks
    void compute(int i) {
      total = 0;
      for (int j = 0; j < i; j++) {
        total += marks[j];
      }
    }
};

int main() {
  int n;
  cout << "Enter the Total number of marks to be entered: ";
  cin >> n;
  student s;
  s.assign(n);
  s.compute(n);
  s.disp(n);
  return 0;
}




