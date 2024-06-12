//#include<iostream>
//#include <fstream>
//#include <string>
//#include <chrono>
//using namespace std;
//using namespace std::chrono;
//
//struct user {
//	string username;
//	int password;
//	string email;
//	string address;
//	string phonenum;
//	//string favuni[100];
//	bool status;
//	user* prevAddress;
//	user* nextAddress;
//}*usertail, * userhead;
//
//struct UniNode {
//	int rank;
//	string name;
//	string loc;
//	string location;
//	double ars;
//	int arr;
//	double ers;
//	int err;
//	double fsrs;
//	int fsrr;
//	double cpfs;
//	int cpfr;
//	double ifrs;
//	int ifrr;
//	double isrs;
//	int isrr;
//	double irns;
//	int irnr;
//	double gers;
//	int gerr;
//	double score;
//	UniNode* NextAdd;
//	UniNode* PrevAdd;
//}*unitail, * unihead;
//
//struct FeedbackNode {
//	string user;
//	string title;
//	string content;
//	FeedbackNode* Next;
//	FeedbackNode* Prev;
//}*fhead, * ftail;
//
//user* createnewuser(string username, int password, string email, string address, string phonenum, bool status) {
//	user* newuser = new user;
//	newuser->username = username;
//	newuser->password = password;
//	newuser->email = email;
//	newuser->address = address;
//	newuser->phonenum = phonenum;
//	newuser->status = status;
//	newuser->prevAddress = NULL;
//	newuser->nextAddress = NULL;
//	return newuser;
//}
//
//UniNode* CreateNewUni(int rank, string name, string loc, string location, double ars, int arr, double ers, int err, double fsrs,
//	int fsrr, double cpfs, int cpfr, double ifrs, int ifrr, double isrs, int isrr, double irns, int irnr, double gers, int gerr, double score) {
//	UniNode* newnode = new UniNode;
//	newnode->rank = rank;
//	newnode->name = name;
//	newnode->loc = loc;
//	newnode->location = location;
//	newnode->ars = ars;
//	newnode->arr = arr;
//	newnode->ers = ers;
//	newnode->err = err;
//	newnode->fsrs = fsrs;
//	newnode->fsrr = fsrr;
//	newnode->cpfs = cpfs;
//	newnode->cpfr = cpfr;
//	newnode->ifrs = ifrs;
//	newnode->ifrr = ifrr;
//	newnode->isrs = isrs;
//	newnode->isrr = isrr;
//	newnode->irns = irns;
//	newnode->irnr = irnr;
//	newnode->gers = gers;
//	newnode->gerr = gerr;
//	newnode->score = score;
//	newnode->NextAdd = NULL;
//	newnode->PrevAdd = NULL;
//	return newnode;
//}
//
//void InsertToFrontUser(string username, int password, string email, string address, string phonenum, bool status) {
//	user* newnode = createnewuser(username, password, email, address, phonenum, status);
//	if (userhead == NULL) {
//		userhead = usertail = NULL;
//	}
//	else {
//		newnode->nextAddress = userhead;
//		userhead->prevAddress = newnode;
//		userhead = newnode;
//	}
//}
//
//void InsertToEndUni(int rank, string name, string loc, string location, double ars, int arr, double ers, int err, double fsrs,
//	int fsrr, double cpfs, int cpfr, double ifrs, int ifrr, double isrs, int isrr, double irns, int irnr, double gers, int gerr, double score) {
//	UniNode* newnode = CreateNewUni(rank, name, loc, location, ars, arr, ers, err, fsrs, fsrr, cpfs, cpfr, ifrs, ifrr, isrs, isrr,
//		irns, irnr, gers, gerr, score);
//	if (unihead == NULL) {
//		unihead = unitail = newnode;
//	}
//	else {
//		newnode->PrevAdd = unitail;
//		unitail->NextAdd = newnode;
//		unitail = newnode;
//	}
//}
//
//void DisplayUni() {
//	UniNode* current = unihead;
//	while (current != NULL) {
//		cout << string(50, '-') << endl;
//		cout << "World University Ranking" << endl;
//		cout << string(50, '-') << endl;
//		cout << "Rank: " << current->rank << endl;
//		cout << "Institution: " << current->name << endl;
//		cout << "Location Code: " << current->loc << endl;
//		cout << "Location: " << current->location << endl;
//		cout << "Ar Score: " << current->ars << endl;
//		cout << "Ar Rank: " << current->arr << endl;
//		cout << "Er Score: " << current->ers << endl;
//		cout << "Er Rank: " << current->err << endl;
//		cout << "Fsr Score: " << current->fsrs << endl;
//		cout << "Fsr Rank: " << current->fsrr << endl;
//		cout << "Cpf Score: " << current->cpfs << endl;
//		cout << "Cpf Rank: " << current->cpfr << endl;
//		cout << "Ifr Score: " << current->ifrs << endl;
//		cout << "Ifr Rank: " << current->ifrr << endl;
//		cout << "Isr Score: " << current->isrs << endl;
//		cout << "Isr Rank: " << current->isrr << endl;
//		cout << "Irn Score: " << current->irns << endl;
//		cout << "Irn Rank: " << current->irnr << endl;
//		cout << "Ger Score: " << current->gers << endl;
//		cout << "Ger Rank: " << current->gerr << endl;
//		cout << "Score: " << current->score << endl << endl;
//		current = current->NextAdd;
//	}
//	cout << "List ended here!" << endl;
//}
//
//UniNode* Merge(UniNode* a, UniNode* b) {
//	if (a == NULL) {
//		return b;
//	}
//	else if (b == NULL) {
//		return a;
//	}
//	else if (a->name < b->name) {
//		a->NextAdd = Merge(a->NextAdd, b);
//		a->NextAdd->PrevAdd = a;
//		a->PrevAdd = NULL;
//		return a;
//	}
//	else {
//		b->NextAdd = Merge(a, b->NextAdd);
//		b->NextAdd->PrevAdd = b;
//		b->PrevAdd = NULL;
//		return b;
//	}
//}
//
//UniNode* MergeSort(UniNode* unihead) {
//	if (unihead == NULL || unihead->NextAdd == NULL) {
//		return unihead;
//	}
//	UniNode* slow = unihead;
//	UniNode* fast = unihead->NextAdd;
//	while (fast != NULL && fast->NextAdd != NULL) {
//		slow = slow->NextAdd;
//		fast = fast->NextAdd->NextAdd;
//	}
//	UniNode* secondhalf = slow->NextAdd;
//	slow->NextAdd = NULL;
//
//	UniNode* left = MergeSort(unihead);
//	UniNode* right = MergeSort(secondhalf);
//
//	UniNode* sorted = Merge(left, right);
//	return sorted;
//}
//void SortUni() {
//	//Merge Sort
//	UniNode* sorted = MergeSort(unihead);
//	//DisplayUni(sorted);
//
//}
//
//void SearchUni() {
//
//}
//
//void Register(string username, int password, string email, string address, string phonenum, bool status) {
//	cout << "Welcome to Register Page!" << endl << (50, '-') << endl;
//	cout << "Name: ";
//	cin >> username;
//	cout << endl << "Password: ";
//	cin >> password;
//	cout << endl << "Email: ";
//	cin >> email;
//	cout << endl << "Address: ";
//	cin >> address;
//	cout << endl << "Phone Number: ";
//	cin >> phonenum;
//	status = true;
//	createnewuser(username, password, email, address, phonenum, status);
//}
//
//void ExitPage()
//{
//	cout << endl << string(50, '=') << endl << "THANK YOU!" << endl << "See You Again!! " << endl << string(50, '=');
//	exit(0);
//}
//
//void AdminPage() {}
////void UserPage(){}
//void UserLogin() {
//	string username;
//	int password;
//	if (userhead == NULL) //list is empty
//	{
//		return;
//	}
//	user* current = userhead;
//	while (current != NULL)
//	{
//		cout << endl << "Enter Username: ";
//		cin >> username;
//		if (current->username == username)
//		{
//			cout << endl << "Enter Password: ";
//			cin >> password;
//			if (current->password == password)
//			{
//				cout << endl << "User Found!";
//				//UserPage();
//			}
//			else {
//				cout << endl << "Invalid Password";
//			}
//		}
//		current = current->nextAddress;
//	}
//	cout << endl << "Username Not Found!!";
//}
//
//void LoginPage() {
//	int choice;
//	cout << endl << "Login Page";
//	cout << endl << "1. User" << endl << "2. Admin" << endl;
//	cin >> choice;
//	switch (choice) {
//	case 1:
//		UserLogin();
//		break;
//	case 2:
//		AdminPage();
//		break;
//	default:
//		cout << endl << "Invalid Input!!";
//	}
//
//}
//void UserPage() {
//	int choice;
//	cout << string(50, '-') << endl;
//	cout << "Hi, you are now in user page." << endl;
//	cout << string(50, '-') << endl << endl;
//	cout << "MENU" << endl;
//	cout << "1. Display University" << endl << "2. Sort University" << endl << "3. Search University" << endl << "4. Resgister" << "5. Exit" << endl;
//	cin >> choice;
//}
//
//void GuestPage() {
//	int choice, password = 0;
//	bool status = true;
//	string username, email, address, phonenum;
//	cout << string(50, '-') << endl;
//	cout << "Hi, you are now in guest page." << endl;
//	cout << string(50, '-') << endl << endl;
//	cout << "MENU" << endl;
//	cout << "1. Display University" << endl << "2. Sort University" << endl << "3. Search University" << endl << "4. Resgister" << endl << "5. Exit" << endl;
//	cin >> choice;
//	switch (choice) {
//	case 1:
//		DisplayUni();
//		break;
//	case 2:
//		SortUni();
//		break;
//	case 3:
//		SearchUni();
//		break;
//	case 4:
//		Register(username, password, email, address, phonenum, status);
//		break;
//	case 5:
//		ExitPage();
//	default:
//		cout << endl << "Invalid Input!";
//	}
//}
//
//int main() {
//	//Menu page
//	unihead = NULL;
//	userhead = NULL;
//	int choice1, password = 0;
//	bool status = true;
//	string username, email, address, phonenum;
//	cout << string(50, '-') << endl;
//
//	string rank, name, loc, location, ars, arr, ers, err, fsrs, fsrr, cpfs, cpfr, ifrs, ifrr, isrs, isrr, irns, irnr, gers, gerr, score;
//	ifstream file("UniRank.csv");
//	file.open("UniRank.csv");
//	while (file.good()) {
//		getline(file, rank, ',');
//		getline(file, name, ',');
//		getline(file, loc, ',');
//		getline(file, location, ',');
//		getline(file, ars, ',');
//		getline(file, arr, ',');
//		getline(file, ers, ',');
//		getline(file, err, ',');
//		getline(file, fsrs, ',');
//		getline(file, fsrr, ',');
//		getline(file, cpfs, ',');
//		getline(file, cpfr, ',');
//		getline(file, ifrs, ',');
//		getline(file, ifrr, ',');
//		getline(file, isrs, ',');
//		getline(file, isrr, ',');
//		getline(file, irns, ',');
//		getline(file, irnr, ',');
//		getline(file, gers, ',');
//		getline(file, gerr, ',');
//		getline(file, score, ',');
//		if (rank == "Rank") {
//			continue;
//		}
//		else if (rank == "") {
//			break;
//		}
//		InsertToEndUni(stoi(rank), name, loc, location, stod(ars), stoi(arr), stod(ers), stoi(err), stod(fsrs), stoi(fsrr), stod(cpfs),
//			stoi(cpfr), stod(ifrs), stoi(ifrr), stod(isrs), stoi(isrr), stod(irns), stoi(irnr), stod(gers), stoi(gerr), stod(score));
//	}
//	file.close();
//
//	cout << "Hi, Welcome to University Recommendation System." << endl;
//	cout << string(50, '-') << endl << endl;
//	cout << "MENU" << endl;
//	cout << "1. Sign Up" << endl << "2. Login" << endl << "3. Continue as Guest" << endl << "4. Exit" << endl;
//	cin >> choice1;
//	switch (choice1) {
//	case 1:
//		Register(username, password, email, address, phonenum, status);
//		break;
//	case 2:
//		LoginPage();
//		break;
//	case 3:
//		//GuestPage();
//		DisplayUni();
//		break;
//	case 4:
//		ExitPage();
//		break;
//	default:
//		cout << "Invalid Input!!" << endl;
//	}
//	return 0;
//}