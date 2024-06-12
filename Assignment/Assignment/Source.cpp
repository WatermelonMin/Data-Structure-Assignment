//#include<iostream>
//#include<string>
//#include<chrono>
//#include<fstream>
//#include<vector>
//#include<algorithm>
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
//	string rank;
//	string name;
//	string loc;
//	string location;
//	string ars;
//	string arr;
//	string ers;
//	string err;
//	string fsrs;
//	string fsrr;
//	string cpfs;
//	string cpfr;
//	string ifrs;
//	string ifrr;
//	string isrs;
//	string isrr;
//	string irns;
//	string irnr;
//	string gers;
//	string gerr;
//	string score;
//	UniNode* NextAdd;
//	UniNode* PrevAdd;
//}*unitail, * unihead;
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
//UniNode* CreateNewUni(string rank, string name, string loc, string location, string ars, string arr, string ers, string err, string fsrs,
//	string fsrr, string cpfs, string cpfr, string ifrs, string ifrr, string isrs, string isrr, string irns, string irnr, string gers, string gerr, string score) {
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
//	user* newuser = createnewuser(username, password, email, address, phonenum, status);
//	if (userhead == NULL) {
//		userhead = usertail = newuser;
//	}
//	else {
//		newuser->nextAddress = userhead;
//		userhead->prevAddress = newuser;
//		userhead = newuser;
//	}
//}
//
//void InsertToEndUni(string rank, string name, string loc, string location, string ars, string arr, string ers, string err, string fsrs,
//	string fsrr, string cpfs, string cpfr, string ifrs, string ifrr, string isrs, string isrr, string irns, string irnr, string gers, string gerr, string score) {
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
//void ExitPage();
//void DisplayUni() {
//	UniNode* current = unitail;
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
//		current = current->PrevAdd;
//	}
//	cout << "List ended here!" << endl;
//	char choice;
//	cout << endl<<"Press 'M' to return to main menu other key to exit. ";
//	cin >> choice;
//	if (choice == 'M' || choice == 'm')
//		return; // Return true to indicate returning to main menu
//	else
//		ExitPage();
//}
////UniNode *MergeSort();
//
//void GuestPage();
//void SearchUni();
//
//void Register(string username,int password,string email,string address,string phonenum,bool status);
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
//	unihead = MergeSort(unihead);
//
//
//}
//void searchrank() {
//	string crank;
//	cout << endl << "Welcome to search using rank!" << endl;
//	cout << "Enter rank to search: ";
//	cin.ignore(); // Ignore any remaining newline characters
//	getline(cin, crank); // Read the entire line of input
//
//	if (unihead == NULL) {
//		cout << "The list is empty." << endl;
//		return;
//	}
//
//	UniNode* current = unihead;
//	bool foundLinear = false;
//
//	while (current != NULL) {
//		if (current->rank == crank) {
//			// Print the details of the matching institution
//			cout << endl << "Rank: " << current->rank << endl;
//			cout << "Institution: " << current->name << endl;
//			cout << "Location Code: " << current->loc << endl;
//			cout << "Location: " << current->location << endl;
//			cout << "ArScore: " << current->ars << endl;
//			cout << "ArRank: " << current->arr << endl;
//			cout << "ErScore: " << current->ers << endl;
//			cout << "ErRank: " << current->err << endl;
//			cout << "FsrScore: " << current->fsrs << endl;
//			cout << "FsrRank: " << current->fsrr << endl;
//			cout << "CpfScore: " << current->cpfs << endl;
//			cout << "CpfRank: " << current->cpfr << endl;
//			cout << "IfrScore: " << current->ifrs << endl;
//			cout << "IfrRank: " << current->ifrr << endl;
//			cout << "IsrScore: " << current->isrs << endl;
//			cout << "IsrRank: " << current->isrr << endl;
//			cout << "IrnScore: " << current->irns << endl;
//			cout << "IrnRank: " << current->irnr << endl;
//			cout << "GerScore: " << current->gers << endl;
//			cout << "GerRank: " << current->gerr << endl;
//			cout << "ScoreScaled: " << current->score << endl;
//
//			foundLinear = true;
//		}
//		current = current->NextAdd;
//	}
//
//	cout << "Institute \"" << crank << "\" found using linear search." << endl;
//
//	if (!foundLinear) {
//		cout << "Institute \"" << crank << "\" is not available in the list!" << endl;
//	}
//	
//	// Binary Search
//	vector <string> institutionRanks;
//	current = unihead;
//	while (current != NULL) {
//		institutionRanks.push_back(current->rank);
//		current = current->NextAdd;
//	}
//
//	sort(institutionRanks.begin(), institutionRanks.end()); // Sort the vector for binary search
//
//	bool foundBinary = binary_search(institutionRanks.begin(), institutionRanks.end(), crank);
//
//	if (foundBinary) {
//		cout << "Rank \"" << crank << "\" found using binary search." << endl;
//	}
//	else {
//		cout << "Rank \"" << crank << "\" not found using binary search." << endl;
//	}
//}
//void searchinstitution() {
//	string cint;
//	cout << endl << "Welcome to search using institution!" << endl;
//	cout << "Enter institution to search: ";
//	cin.ignore(); // Ignore any remaining newline characters
//	getline(cin, cint); // Read the entire line of input
//
//	if (unihead == NULL) {
//		cout << "The list is empty." << endl;
//		return;
//	}
//	auto startt = high_resolution_clock::now();
//	//Linear Search
//	UniNode* current = unihead;
//	bool foundLinear = false;
//
//	while (current != NULL) {
//		if (current->name == cint) {
//			// Print the details of the matching institution
//			cout << endl << "Rank: " << current->rank << endl;
//			cout << "Institution: " << current->name << endl;
//			cout << "Location Code: " << current->loc << endl;
//			cout << "Location: " << current->location << endl;
//			cout << "ArScore: " << current->ars << endl;
//			cout << "ArRank: " << current->arr << endl;
//			cout << "ErScore: " << current->ers << endl;
//			cout << "ErRank: " << current->err << endl;
//			cout << "FsrScore: " << current->fsrs << endl;
//			cout << "FsrRank: " << current->fsrr << endl;
//			cout << "CpfScore: " << current->cpfs << endl;
//			cout << "CpfRank: " << current->cpfr << endl;
//			cout << "IfrScore: " << current->ifrs << endl;
//			cout << "IfrRank: " << current->ifrr << endl;
//			cout << "IsrScore: " << current->isrs << endl;
//			cout << "IsrRank: " << current->isrr << endl;
//			cout << "IrnScore: " << current->irns << endl;
//			cout << "IrnRank: " << current->irnr << endl;
//			cout << "GerScore: " << current->gers << endl;
//			cout << "GerRank: " << current->gerr << endl;
//			cout << "ScoreScaled: " << current->score << endl;
//
//			foundLinear = true;
//		}
//		current = current->NextAdd;
//	}
//	cout << "Institute \"" << cint << "\" found using linear search." << endl;
//
//	if (!foundLinear) {
//		cout << "Institute \"" << cint << "\" is not available in the list!" << endl;
//	}
//	auto stop = high_resolution_clock::now();
//	auto duration = duration_cast<microseconds>(stop - startt);
//	cout << "Time taken by insert sort algorithm: ";
//	cout << duration.count() << "microseconds. " << endl;
//	//SortUni();
//	//UniNode* start = unihead;
//	//UniNode* end = unitail;
//	//bool foundBinary = false;
//
//	//while (start != NULL && end != NULL && start != end && start->PrevAdd != end) {
//	//	UniNode* mid = start;
//	//	int count = 0;
//	//	while (mid != end && mid != NULL && mid != start && mid->PrevAdd != end) {
//	//		mid = mid->NextAdd;
//	//		count++;
//	//	}
//	//	count /= 2;
//	//	while (count > 0 && mid != NULL && mid != end) {
//	//		mid = mid->PrevAdd;
//	//		count--;
//	//	}
//	//	if (mid == NULL)
//	//		break;
//	//	if (mid->name == cint) {
//	//		// Print the details of the matching institution
//	//		cout << endl << "Rank: " << mid->rank << endl;
//	//		cout << "Institution: " << mid->name << endl;
//	//		cout << "Location Code: " << mid->loc << endl;
//	//		cout << "Location: " << mid->location << endl;
//	//		cout << "ArScore: " << mid->ars << endl;
//	//		cout << "ArRank: " << mid->arr << endl;
//	//		cout << "ErScore: " << mid->ers << endl;
//	//		cout << "ErRank: " << mid->err << endl;
//	//		cout << "FsrScore: " << mid->fsrs << endl;
//	//		cout << "FsrRank: " << mid->fsrr << endl;
//	//		cout << "CpfScore: " << mid->cpfs << endl;
//	//		cout << "CpfRank: " << mid->cpfr << endl;
//	//		cout << "IfrScore: " << mid->ifrs << endl;
//	//		cout << "IfrRank: " << mid->ifrr << endl;
//	//		cout << "IsrScore: " << mid->isrs << endl;
//	//		cout << "IsrRank: " << mid->isrr << endl;
//	//		cout << "IrnScore: " << mid->irns << endl;
//	//		cout << "IrnRank: " << mid->irnr << endl;
//	//		cout << "GerScore: " << mid->gers << endl;
//	//		cout << "GerRank: " << mid->gerr << endl;
//	//		cout << "ScoreScaled: " << mid->score << endl;
//
//	//		foundBinary = true;
//	//		break;
//	//	}
//	//	else if (mid->name < cint) {
//	//		start = mid->NextAdd;
//	//	}
//	//	else {
//	//		end = mid->PrevAdd;
//	//	}
//	//	if (foundBinary) {
//	//		cout << "Institute" << cint << " found using binary search." << endl;
//	//	}
//	//	else {
//	//		cout << "Institute" << cint << " not found using binary search." << endl;
//	//	}
//
//	//}
//
//
//
//}
//
//void searchlocation() {
//	string cloca;
//	cout << endl << "Welcome to search using location!" << endl;
//	cout << "Enter location to search: ";
//	cin.ignore(); // Ignore any remaining newline characters
//	getline(cin, cloca); // Read the entire line of input
//
//
//	if (unihead == NULL) {
//		cout << "The list is empty." << endl;
//		return;
//	}
//
//	UniNode* current = unihead;
//	bool foundLinear = false;
//
//	while (current != NULL) {
//		if (current->location == cloca) {
//			// Print the details of the matching institution
//			cout << endl << "Rank: " << current->rank << endl;
//			cout << "Institution: " << current->name << endl;
//			cout << "Location Code: " << current->loc << endl;
//			cout << "Location: " << current->location << endl;
//			cout << "ArScore: " << current->ars << endl;
//			cout << "ArRank: " << current->arr << endl;
//			cout << "ErScore: " << current->ers << endl;
//			cout << "ErRank: " << current->err << endl;
//			cout << "FsrScore: " << current->fsrs << endl;
//			cout << "FsrRank: " << current->fsrr << endl;
//			cout << "CpfScore: " << current->cpfs << endl;
//			cout << "CpfRank: " << current->cpfr << endl;
//			cout << "IfrScore: " << current->ifrs << endl;
//			cout << "IfrRank: " << current->ifrr << endl;
//			cout << "IsrScore: " << current->isrs << endl;
//			cout << "IsrRank: " << current->isrr << endl;
//			cout << "IrnScore: " << current->irns << endl;
//			cout << "IrnRank: " << current->irnr << endl;
//			cout << "GerScore: " << current->gers << endl;
//			cout << "GerRank: " << current->gerr << endl;
//			cout << "ScoreScaled: " << current->score << endl;
//
//			foundLinear = true;
//		}
//		current = current->NextAdd;
//	}
//
//	cout << "Location \"" << cloca << "\" found using linear search." << endl;
//
//	if (!foundLinear) {
//		cout << "Location \"" << cloca << "\" is not available in the list!" << endl;
//	}
//	// Binary Search
//	vector <string> institutionLocations;
//	current = unihead;
//	while (current != NULL) {
//		institutionLocations.push_back(current->location);
//		current = current->NextAdd;
//	}
//
//	sort(institutionLocations.begin(), institutionLocations.end()); // Sort the vector for binary search
//
//	bool foundBinary = binary_search(institutionLocations.begin(), institutionLocations.end(), cloca);
//
//	if (foundBinary) {
//		cout << "Institute \"" << cloca << "\" found using binary search." << endl;
//	}
//	else {
//		cout << "Institute \"" << cloca << "\" not found using binary search." << endl;
//	}
//}
//
//
//void SearchUni() {
//	int searchchoice;
//	cout << endl << "Welcome to Search for University";
//	cout << "Choose for the categories to search." << endl << "1. Rank" << endl << "2. Institution" << endl << "3. Location" << endl << "Choice: ";
//	cin >> searchchoice;
//	switch (searchchoice) {
//	case 1:
//		searchrank();
//		break;
//	case 2:
//		searchinstitution();
//		break;
//	case 3:
//		searchlocation();
//		break;
//	default:
//		cout << "Invalid Input! ";
//	}
//
//	//char choice;
//	//cout <<endl<< "Press 'M' to return to main menu or other key to exit. ";
//	//cin >> choice;
//	//if (choice == 'M' || choice == 'm')
//	//	return; // Return true to indicate returning to main menu
//	//else
//	//	ExitPage();
//}
//void SearchUniG() {
//	int searchchoice;
//	cout << endl << "Welcome to Search for University";
//	cout << "Choose for the categories to search." << endl << "1. Institution" << endl  << "2.Exit"<<endl<<"Choice: ";
//	cin >> searchchoice;
//	switch (searchchoice) {
//	case 1:
//		searchinstitution();
//		break;
//	case 2:
//		GuestPage();
//		break;
//	default:
//		cout << "Invalid Input! ";
//	}
//
//	char choice;
//	cout << endl << "Press 'M' to return to main menu or other key to exit. ";
//	cin >> choice;
//	if (choice == 'M' || choice == 'm')
//		return; // Return true to indicate returning to main menu
//	else
//		ExitPage();
//}
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
//	InsertToFrontUser(username,password, email, address, phonenum, status);
//
//	char choice;
//	cout <<endl<< "Press 'M' to return to main menu or other key to exit. ";
//	cin >> choice;
//	if (choice == 'M' || choice == 'm')
//		return; // Return true to indicate returning to main menu
//	else
//		ExitPage();
//}
//
//void ExitPage()
//{
//	cout << endl << string(50, '=') << endl << "THANK YOU!" << endl << "See You Again!! " << endl << string(50, '=');
//	exit(0);
//}
//
//void AdminPage() {}
//void UserPage();
//void UserLogin() {
//	string username;
//	int password;
//	bool loggedIn = false;
//	if (userhead == NULL) //list is empty
//	{
//		cout << "Empty List!" << endl;
//		return;
//	}
//	user* current = userhead;
//	while (current != NULL && !loggedIn)
//	{
//		cout << endl << "Enter Username: ";
//		cin >> username;
//		if (current->username == username)
//		{
//			while (!loggedIn) {
//				cout << endl << "Enter Password: ";
//				cin >> password;
//				if (current->password == password)
//				{
//					cout << endl << "User Found!" << endl;
//					loggedIn = true;
//					UserPage();
//				}
//				else {
//					cout << endl << "Invalid Password";
//				}
//			}
//		}
//		current = current->nextAddress;
//	}
//	if (!loggedIn) {
//		cout << endl << "Username Not Found!!";
//	}
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
//	cout << "1. Display University" << endl << "2. Sort University" << endl << "3. Search University" << endl << "4. Exit" << endl;
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
//		return;
//	default:
//		cout << endl << "Invalid Input!";
//	}
//}
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
//		SearchUniG();
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
//
//int main() {
//	ifstream file("university.csv");
//
//	string rank, name, loc, location, ars, arr, ers, err, fsrs, fsrr, cpfs, cpfr, ifrs, ifrr, isrs, isrr, irns, irnr, gers, gerr, score;
//
//	if (file.is_open())
//	{
//		cout << "File open" << endl;
//	}
//	else
//	{
//		cout << "Not open" << endl;
//	}
//
//	while (file.good())
//	{
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
//		getline(file, score);
//		if (name == "Institution") {
//			continue;
//		}
//		else if (rank == "") {
//			break;
//		}
//		InsertToEndUni(rank, name, loc, location, ars, arr, ers, err, fsrs, fsrr, cpfs,
//			cpfr, ifrs, ifrr, isrs, isrr, irns, irnr, gers, gerr, score);
//	}
//	file.close();
//	int choice1, password = 0;
//	bool status = true;
//	string username, email, address, phonenum;
//	cout << string(50, '-') << endl;
//	cout << "Hi, Welcome to University Recommendation System." << endl;
//	cout << string(50, '-') << endl << endl;
//	bool exitProgram = false;
//	do{
//		cout <<endl<< "MENU" << endl;
//		cout << "1. Sign Up" << endl << "2. Login" << endl << "3. Continue as Guest" << endl << "4. Exit" << endl;
//		cin >> choice1;
//		switch (choice1) {
//		case 1:
//			Register(username, password, email, address, phonenum, status);
//			break;
//		case 2:
//			LoginPage();
//			break;
//		case 3:
//			GuestPage();
//			break;
//		case 4:
//			exitProgram = true;
//			ExitPage();
//			break;
//		default:
//			cout << "Invalid Input!!" << endl;
//		}
//	}while (!exitProgram);
//	return 0;
//}