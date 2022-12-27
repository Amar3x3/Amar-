#include <bits/stdc++.h>
#define V 20
using namespace std; 
class studentdata 
{ 
int rollno; 
char name[V]; 
int division; 
char address[V]; 
public: 
studentdata() 
{ 
rollno = -1; 
strcpy(name, "NULL"); 
strcpy(address, "NULL"); 
division = -1; 
} 
void enterdata(); 
void display(); 
void get_data(int); 
int return_rollno() 
{ 
return rollno; 
} 
}; 
void studentdata::enterdata() 
{ 
cout << "Enter Student Data:" << endl; 
cout << "Roll Number of student : " << endl; 
cin >> rollno; 
cout << "Name of Student is :"; 
cin >> name; 
cout << "Division of student is :"; 
cin >> division; 
cout << "Address of Student is :"; 
cin >> address;
} 
void studentdata::get_data(int r) 
{ 
cout << "Enter Student Data:" << endl; 
rollno = r; 
//cout<<"\nRoll Number : ";cin >> rollno; 
cout << "\nName :"; 
cin >> name; 
cout << "Division :"; 
cin >> division; 
cout << "Address :"; 
cin >> address; 
} 
void studentdata::display() 
{ 
cout << endl 
<< rollno << "\t" << name << "\t\t" << division << "\t\t" << address; } 
class sequencefile 
{ 
char filename[V]; 
public: 
sequencefile(); 
sequencefile(char F[]); 
void displayrecords(); 
void insert(); 
bool deleterecord(int); 
void modify(int); 
}; 
//Constructor of class sequencefile 
sequencefile::sequencefile() 
{ 
ofstream FileA("Student.txt"); 
strcpy(filename, "Student.txt"); 
if (FileA) 
{ 
cout << "File Student.txt created Successfully" << endl; 
FileA.close(); 
}
else 
cout << "File is not creation"; 
} 
//Display all records of file 
void sequencefile::displayrecords() 
{ 
ifstream FileA; 
studentdata S; 
FileA.open(filename); 
FileA.read((char*)&S, sizeof(S)); 
if (!FileA.eof()) 
{ 
cout << "\nRoll No\t Student Name \t Division \t Address"; while (!FileA.eof()) 
{ 
S.display(); 
FileA.read((char*)&S, sizeof(S)); 
} 
} 
else 
cout << "No Records here"<<endl; 
FileA.close(); 
} 
void sequencefile::insert() 
{ 
ofstream FileA; 
studentdata S; 
FileA.open(filename, ios::app); 
S.enterdata(); 
FileA.write((char*)&S, sizeof(S)); 
FileA.close(); 
} 
//Delete a record from file 
bool sequencefile::deleterecord(int roll) 
{ 
char filename[V]; 
cin >> filename; 
ifstream FileA; 
ofstream tempfile; 
studentdata S;
int flag = 0; 
FileA.open(filename); 
tempfile.open("Temp.txt"); 
FileA.read((char*)&S, sizeof(S)); 
while (!FileA.eof()) 
{ 
if (roll == S.return_rollno()) 
{ 
S.display(); 
flag = 1; 
} 
else 
tempfile.write((char*)&S, sizeof(S)); 
FileA.read((char*)&S, sizeof(S)); 
} 
FileA.close(); 
tempfile.close(); 
remove(filename); 
rename("Temp.txt", filename); 
if (flag == 0) 
{ 
cout << "Record for Roll No. " << roll << " not found here"<<endl; return 0; 
} 
else 
{ 
cout << "Record Deleted Successfully"<<endl; 
return 1; 
} 
} 
//For modify a record from file 
void sequencefile::modify(int roll) 
{ 
ifstream FileA; 
ofstream tempfile; 
studentdata S; 
int flag = 0; 
FileA.open(filename); 
tempfile.open("Temp.txt"); 
FileA.read((char*)&S, sizeof(S)); 
while (!FileA.eof()) 
{ 
if (roll == S.return_rollno())
{ 
S.display(); 
cout << "Enter data to modify : "<<endl; 
S.get_data(roll); 
flag = 1; 
} 
tempfile.write((char*)&S, sizeof(S)); 
FileA.read((char*)&S, sizeof(S)); 
} 
if (flag == 0) 
cout << "Record for Roll No. " << roll << " not found here"<<endl; else 
cout << "Record Modified Successfully"<<endl; 
FileA.close(); 
tempfile.close(); 
remove(filename); 
rename("Temp.txt", filename); 
} 
int main() 
{ 
int ch; 
char fname[V]; 
int roll; 
sequencefile sfile; 
int count = 0; 
bool dele = 0; 
do 
{ 
cout << "\n1: Add a record \n2: Display records\n3: Delete a record\n4: Modify a record\n5. Exit\nEnter your choice: "; 
cin >> ch; 
switch (ch) 
{ 
case 1: 
sfile.insert(); 
count++; 
break; 
case 2: 
sfile.displayrecords(); 
break; 
case 3: 
if (count != 0) 
{ 
cout << "Enter Roll No to delete : "<<endl;
cin >> roll; 
dele = sfile.deleterecord(roll); 
if (dele) { 
count--; 
} 
} 
else 
cout << "No Records here"<<endl; 
break; 
case 4: 
if (count != 0) 
{ 
cout << "Enter RollNo to Modify : "<<endl; 
cin >> roll; 
sfile.modify(roll); 
} 
else 
cout << "No Records here"<<endl; 
break; 
} 
} while (ch < 5); 
return 0; 
}