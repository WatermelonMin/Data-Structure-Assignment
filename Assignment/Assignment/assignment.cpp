//#include<iostream>
//#include <fstream>
//#include <string>
//#include <chrono>
//
//using namespace std;
//using namespace std::chrono;
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
//int size = 0;
//
//struct user {
//	int id;
//	string username;
//	string password;
//	string email;
//	string address;
//	string phonenum;
//	bool status;
//	UniNode* favunihead;
//	user* prevAddress;
//	user* nextAddress;
//
//	user() {
//		favunihead = NULL;
//	}
//}*usertail, * userhead, * currentuser;
//
//int userSize = 0;
//
//struct FeedbackNode {
//	string PublishDT;
//	string FeedbackContent;
//	string FeedbackReply;
//	FeedbackNode* NextAdd;
//	FeedbackNode* PrevAdd;
//}*head, * tail;
//
//int feedbackSize = 0;
//
//class Admin
//{
//	string username = "admin";
//	string password = "123";
//
//public:
//	string getUsernmane()
//	{
//		return username;
//	}
//	string getPassword()
//	{
//		return password;
//	}
//};
//
//user* createnewuser(string username, string password, string email, string address, string phonenum, bool status) {
//	user* newuser = new user;
//	newuser->id = userSize + 1;
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
//	string fsrr, string cpfs, string cpfr, string ifrs, string ifrr, string isrs, string isrr, string irns, string irnr, string gers,
//	string gerr, string score) {
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
//void InsertToFrontUser(string username, string password, string email, string address, string phonenum, bool status) {
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
//void insertToEnd(string username, string password, string email, string address, string phonenum, bool status)
//{
//	user* newNode = createnewuser(username, password, email, address, phonenum, status);
//	if (userhead == NULL)
//	{
//		userhead = newNode;
//		usertail = newNode;
//
//	}
//	else
//	{
//		newNode->prevAddress = usertail;
//		usertail->nextAddress = newNode;
//		usertail = newNode;
//	}
//
//	userSize++;
//}
//
//void InsertToEndUni(string rank, string name, string loc, string location, string ars, string arr, string ers, string err, string fsrs,
//	string fsrr, string cpfs, string cpfr, string ifrs, string ifrr, string isrs, string isrr, string irns, string irnr, string gers,
//	string gerr, string score) {
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
//	::size++;
//}
//
//void ExitPage() {
//	cout << endl << string(50, '=') << endl << "\t\tTHANK YOU! :>" << endl << 
//		"\t\tSee You Again!! :> " << endl << string(50, '=');
//
//	exit(0);
//}
//
//void DisplayUni() {
//	UniNode* current = unitail;
//	cout << string(50, '-') << endl;
//	cout << "World University Ranking" << endl;
//	cout << string(50, '-') << endl;
//	while (current != NULL) {
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
//	cout << endl << "Press 'M' to return to main menu other key to exit. ";
//	cin >> choice;
//	if (choice == 'M' || choice == 'm')
//		return; // Return true to indicate returning to main menu
//	else
//		ExitPage();
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
//UniNode* MergeAr(UniNode* a, UniNode* b) {
//	if (a == NULL) {
//		return b;
//	}
//	else if (b == NULL) {
//		return a;
//	}
//	else if (a->ars > b->ars) {
//		a->NextAdd = MergeAr(a->NextAdd, b);
//		a->NextAdd->PrevAdd = a;
//		a->PrevAdd = NULL;
//		return a;
//	}
//	else {
//		b->NextAdd = MergeAr(a, b->NextAdd);
//		b->NextAdd->PrevAdd = b;
//		b->PrevAdd = NULL;
//		return b;
//	}
//}
//
//UniNode* MergeEr(UniNode* a, UniNode* b) {
//	if (a == NULL) {
//		return b;
//	}
//	else if (b == NULL) {
//		return a;
//	}
//	else if (a->ers > b->ers) {
//		a->NextAdd = MergeEr(a->NextAdd, b);
//		a->NextAdd->PrevAdd = a;
//		a->PrevAdd = NULL;
//		return a;
//	}
//	else {
//		b->NextAdd = MergeEr(a, b->NextAdd);
//		b->NextAdd->PrevAdd = b;
//		b->PrevAdd = NULL;
//		return b;
//	}
//}
//
//UniNode* MergeFsr(UniNode* a, UniNode* b) {
//	if (a == NULL) {
//		return b;
//	}
//	else if (b == NULL) {
//		return a;
//	}
//	else if (a->fsrs > b->fsrs) {
//		a->NextAdd = MergeFsr(a->NextAdd, b);
//		a->NextAdd->PrevAdd = a;
//		a->PrevAdd = NULL;
//		return a;
//	}
//	else {
//		b->NextAdd = MergeFsr(a, b->NextAdd);
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
//
//UniNode* MergeSortAr(UniNode* unihead) {
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
//	UniNode* left = MergeSortAr(unihead);
//	UniNode* right = MergeSortAr(secondhalf);
//
//	UniNode* sorted = MergeAr(left, right);
//	return sorted;
//}
//
//UniNode* MergeSortEr(UniNode* unihead) {
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
//	UniNode* left = MergeSortEr(unihead);
//	UniNode* right = MergeSortEr(secondhalf);
//
//	UniNode* sorted = MergeEr(left, right);
//	return sorted;
//}
//
//UniNode* MergeSortFsr(UniNode* unihead) {
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
//	UniNode* left = MergeSortFsr(unihead);
//	UniNode* right = MergeSortFsr(secondhalf);
//
//	UniNode* sorted = MergeFsr(left, right);
//	return sorted;
//}
//
//void swap(int* c, int* d) {
//	int temp = *c;
//	*c = *d;
//	*d = temp;
//}
//
//UniNode* Partition(UniNode* unihead, UniNode* unitail) {
//	string pivot = unitail->name;
//	UniNode* i = unihead->PrevAdd;
//	string pivotRank = unitail->rank;
//	for (UniNode* j = unihead; j != unitail; j = j->NextAdd) {
//		if (j->name.compare(pivot) <= 0) {
//			i = (i == NULL) ? unihead : i->NextAdd;
//			swap(i->name, j->name);
//			swap(i->rank, j->rank);
//			swap(i->loc, j->loc);
//			swap(i->location, j->location);
//			swap(i->ars, j->ars);
//			swap(i->arr, j->arr);
//			swap(i->ers, j->ers);
//			swap(i->err, j->err);
//			swap(i->fsrs, j->fsrs);
//			swap(i->fsrr, j->fsrr);
//			swap(i->cpfs, j->cpfs);
//			swap(i->cpfr, j->cpfr);
//			swap(i->ifrs, j->ifrs);
//			swap(i->ifrr, j->ifrr);
//			swap(i->isrs, j->isrs);
//			swap(i->isrr, j->isrr);
//			swap(i->irns, j->irns);
//			swap(i->irnr, j->irnr);
//			swap(i->gers, j->gers);
//			swap(i->gerr, j->gerr);
//			swap(i->score, j->score);
//		}
//	}
//	i = (i == NULL) ? unihead : i->NextAdd;
//	swap(i->name, unitail->name);
//	swap(i->rank, unitail->rank);
//	swap(i->loc, unitail->loc);
//	swap(i->location, unitail->location);
//	swap(i->ars, unitail->ars);
//	swap(i->arr, unitail->arr);
//	swap(i->ers, unitail->ers);
//	swap(i->err, unitail->err);
//	swap(i->fsrs, unitail->fsrs);
//	swap(i->fsrr, unitail->fsrr);
//	swap(i->cpfs, unitail->cpfs);
//	swap(i->cpfr, unitail->cpfr);
//	swap(i->ifrs, unitail->ifrs);
//	swap(i->ifrr, unitail->ifrr);
//	swap(i->isrs, unitail->isrs);
//	swap(i->isrr, unitail->isrr);
//	swap(i->irns, unitail->irns);
//	swap(i->irnr, unitail->irnr);
//	swap(i->gers, unitail->gers);
//	swap(i->gerr, unitail->gerr);
//	swap(i->score, unitail->score);
//	return i;
//}
//
//void QuickSort(UniNode* unihead, UniNode* unitail) {
//	if (unitail != NULL && unihead != unitail && unihead != unitail->NextAdd) {
//		UniNode* pivot = Partition(unihead, unitail);
//		QuickSort(unihead, pivot->PrevAdd);
//		QuickSort(pivot->NextAdd, unitail);
//	}
//}
//void UserPage();
//void SortUni() {
//	auto start = high_resolution_clock::now();
//	//Merge Sort
//	unihead = MergeSort(unihead);
//	DisplayUni();
//	auto stop = high_resolution_clock::now();
//
//	auto duration = duration_cast<microseconds>(stop - start);
//	cout << "Time taken by merge sort algorithm: ";
//	cout << duration.count() << " microseconds" << endl;
//
//	//Quick Sort
//	/*QuickSort(unihead, unitail);
//	DisplayUni();
//	auto stop = high_resolution_clock::now();
//
//	auto duration = duration_cast<microseconds>(stop - start);
//	cout << "Time taken by quick sort algorithm: ";
//	cout << duration.count() << " microseconds" << endl;*/
//}
//
//void SortUniBy() {
//	int ans;
//	cout << endl << "Sort univevrsity By: " << endl;
//	cout << "1. Academic Reputation Score" << endl << "2. Faculty/Student Ratio Score" << endl << "3. Employer Reputation Score" << endl << "4. Back" << endl;
//	cout << "Enter your choice: ";
//	cin >> ans;
//	switch (ans) {
//	case 1:
//		unihead = MergeSortAr(unihead);
//		DisplayUni();
//		break;
//	case 2:
//		unihead = MergeSortEr(unihead);
//		DisplayUni();
//		break;
//	case 3:
//		unihead = MergeSortFsr(unihead);
//		DisplayUni();
//		break;
//	case 4:
//		UserPage();
//		break;
//	default:
//		cout << "Invalid Input! ";
//	}
//}
//
//void searchrank() {
//	string crank;
//	cout << endl << "Welcome to search using rank!" << endl;
//	cout << "Enter rank to search: ";
//	cin.ignore(); // Ignore any remaining newline characters
//	getline(cin, crank); // Read the entire line of input
//
//	/*auto start = high_resolution_clock::now();*/
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
//			//Print the details of the matching institution
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
//	cout << "Rank \"" << crank << "\" found using linear search." << endl;
//
//	if (!foundLinear) {
//		cout << "Rank \"" << crank << "\" is not available in the list!" << endl;
//	}
//}
//
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
//
//	//Linear Search
//	UniNode* current = unihead;
//	bool foundLinear = false;
//
//	while (current != NULL) {
//		if (current->name == cint) {
//			//Print the details of the matching institution
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
//
//
//	////Binary Search
//	//auto startt = high_resolution_clock::now();
//	//unihead = MergeSort(unihead);
//	//UniNode* start = unihead;
//	//UniNode* end = unitail;
//	//bool foundBinary = false;
//
// //  while (start != NULL && end != NULL && start != end && start->PrevAdd != end) {
// //  	UniNode* mid = start;
// //  	int count = 0;
// //  	while (mid != end && mid != NULL && mid != start && mid->PrevAdd != end) {
// //  		mid = mid->NextAdd;
// //  		count++;
// //  	}
// //  	count /= 2;
// //  	while (count > 0 && mid != NULL && mid != end) {
// //  		mid = mid->PrevAdd;
// //  		count--;
// //  	}
// //  	if (mid == NULL)
// //  		break;
// //  	if (mid->name == cint) {
// //  		// Print the details of the matching institution
// //  		cout << endl << "Rank: " << mid->rank << endl;
// //  		cout << "Institution: " << mid->name << endl;
// //  		cout << "Location Code: " << mid->loc << endl;
// //  		cout << "Location: " << mid->location << endl;
// //  		cout << "ArScore: " << mid->ars << endl;
// //  		cout << "ArRank: " << mid->arr << endl;
// //  		cout << "ErScore: " << mid->ers << endl;
// //  		cout << "ErRank: " << mid->err << endl;
// //  		cout << "FsrScore: " << mid->fsrs << endl;
// //  		cout << "FsrRank: " << mid->fsrr << endl;
// //  		cout << "CpfScore: " << mid->cpfs << endl;
// //  		cout << "CpfRank: " << mid->cpfr << endl;
// //  		cout << "IfrScore: " << mid->ifrs << endl;
// //  		cout << "IfrRank: " << mid->ifrr << endl;
// //  		cout << "IsrScore: " << mid->isrs << endl;
// //  		cout << "IsrRank: " << mid->isrr << endl;
// //  		cout << "IrnScore: " << mid->irns << endl;
// //  		cout << "IrnRank: " << mid->irnr << endl;
// //  		cout << "GerScore: " << mid->gers << endl;
// //  		cout << "GerRank: " << mid->gerr << endl;
// //  		cout << "ScoreScaled: " << mid->score << endl;
//
// //  		foundBinary = true;
// //  		break;
// //  	}
// //  	else if (mid->name < cint) {
// //  		start = mid->NextAdd;
// //  	}
// //  	else {
// //  		end = mid->PrevAdd;
// //  	}
// //  	if (foundBinary) {
// //  		cout << "Institute" << cint << " found using binary search." << endl;
// //  	}
// //  	else {
// //  		cout << "Institute" << cint << " not found using binary search." << endl;
// //  	}
// //   
// //  }
// //  auto stop = high_resolution_clock::now();
// //  auto duration = duration_cast<microseconds>(stop - startt);
// //  cout << "Time taken by binary search algorithm: ";
// //  cout << duration.count() << " microseconds. " << endl;
//}
//
//void searchlocation() {
//	string cloca;
//	cout << endl << "Welcome to search using location!" << endl;
//	cout << "Enter location to search: ";
//	cin.ignore(); // Ignore any remaining newline characters
//	getline(cin, cloca); // Read the entire line of input
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
//			//Print the details of the matching institution
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
//}
//
//void SearchUni() {
//	int searchchoice;
//	cout << endl << "Welcome to Search for University"<<endl;
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
//		cout << "Invalid Input! "<<endl;
//	}
//}
//
//void FavUni(user* currentuser) {
//	int ans;
//	UniNode* current = unihead;
//	cout << endl << "Select a university to add to favorites: " << endl;
//	for (int i = 1; i <= ::size; i++) {
//		cout << i << ". " << current->name << endl;
//		current = current->NextAdd;
//	}
//	cout << "Enter your choice: ";
//	cin >> ans;
//
//	//Find the selected uni
//	UniNode* selecteduni = unihead;
//	for (int i = 1; i < ans && selecteduni != NULL; i++) {
//		selecteduni = selecteduni->NextAdd;
//	}
//
//	//Save the selected university as favorite
//	if (selecteduni != NULL) {
//		UniNode* fav = CreateNewUni(selecteduni->rank, selecteduni->name, selecteduni->loc, selecteduni->location, selecteduni->ars,
//			selecteduni->arr, selecteduni->ers, selecteduni->err, selecteduni->fsrs, selecteduni->fsrr, selecteduni->cpfs,
//			selecteduni->cpfr, selecteduni->ifrs, selecteduni->ifrr, selecteduni->isrs, selecteduni->isrr, selecteduni->irns,
//			selecteduni->irnr, selecteduni->gers, selecteduni->gerr, selecteduni->score);
//
//		if (currentuser->favunihead == NULL) {
//			currentuser->favunihead = fav;
//		}
//		else {
//			UniNode* currentfav = currentuser->favunihead;
//			while (currentfav->NextAdd != NULL) {
//				currentfav = currentfav->NextAdd;
//			}
//			currentfav->NextAdd = fav;
//		}
//		cout << "University saved as favorite!" << endl;
//	}
//	else {
//		cout << "Invalid university choice!" << endl;
//	}
//}
//
//void DisplayFavUni(user* currentuser) {
//	cout << "Favorite Universities: " << endl;
//	cout << string(50, '-') << endl;
//	UniNode* current = currentuser->favunihead;
//	if (current == NULL) {
//		cout << "No favorite universities saved!" << endl;
//	}
//	else {
//		while (current != NULL) {
//			cout << "Rank: " << current->rank << endl;
//			cout << "Institution: " << current->name << endl;
//			cout << "Location Code: " << current->loc << endl;
//			cout << "Location: " << current->location << endl;
//			cout << "Ar Score: " << current->ars << endl;
//			cout << "Ar Rank: " << current->arr << endl;
//			cout << "Er Score: " << current->ers << endl;
//			cout << "Er Rank: " << current->err << endl;
//			cout << "Fsr Score: " << current->fsrs << endl;
//			cout << "Fsr Rank: " << current->fsrr << endl;
//			cout << "Cpf Score: " << current->cpfs << endl;
//			cout << "Cpf Rank: " << current->cpfr << endl;
//			cout << "Ifr Score: " << current->ifrs << endl;
//			cout << "Ifr Rank: " << current->ifrr << endl;
//			cout << "Isr Score: " << current->isrs << endl;
//			cout << "Isr Rank: " << current->isrr << endl;
//			cout << "Irn Score: " << current->irns << endl;
//			cout << "Irn Rank: " << current->irnr << endl;
//			cout << "Ger Score: " << current->gers << endl;
//			cout << "Ger Rank: " << current->gerr << endl;
//			cout << "Score: " << current->score << endl << endl;
//			current = current->NextAdd;
//		}
//	}
//	cout << "List ended here!" << endl;
//	char choice;
//	cout << endl << "Press 'M' to return to main menu other key to exit. ";
//	cin >> choice;
//	if (choice == 'M' || choice == 'm')
//		return; // Return true to indicate returning to main menu
//	else
//		ExitPage();
//}
//
//void DisplayUser()
//{
//	user* current = userhead;
//	while (current != NULL)
//	{
//		cout << "ID: " << current->id << endl;
//		cout << "Username: " << current->username << endl;
//		cout << "Email: " << current->email << endl;
//		cout << "Address: " << current->address << endl;
//		cout << "Phone Number: " << current->phonenum << endl;
//		cout << "Status: " << current->status << endl << endl;
//		cout << string(50, '=') << endl;
//		current = current->nextAddress;
//	}
//}
//
//user* linear_search(int id)
//{
//	user* dummy = new user;
//	dummy = userhead;
//	while (dummy->id != id)
//	{
//		dummy = dummy->nextAddress;
//	}
//	return dummy;
//}
//
//void ModifyUser()
//{
//	int id = 0;
//	DisplayUser();
//	cout << "Which user details do you want to modify?" << endl;
//	cout << "Enter the ID: ";
//	cin >> id;
//	//use linear search to find the user
//	user* u = new user;
//	u = linear_search(id);
//	cout << u->username << endl;
//
//	//user found
//	int choice = 0;
//	string newName, newAddress, newEmail, newPhone;
//	cout << "What do you want to modify? " << endl;
//	cout << "1. Name" << endl;
//	cout << "2. Address " << endl;
//	cout << "3. Email " << endl;
//	cout << "4. Phone Number " << endl;
//	cout << "5. Status " << endl;
//	cout << "Enter your choice: ";
//	cin >> choice;
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	switch (choice)
//	{
//	case 1:
//		cout << "Enter new name: ";
//		getline(cin, newName);
//
//		u->username = newName;
//		cout << u->username << endl;
//		return;
//	case 2:
//		cout << "Enter new address: ";
//		getline(cin, newAddress);
//
//		u->address = newAddress;
//		cout << u->address << endl;
//		return;
//	case 3:
//		cout << "Enter new email: ";
//		getline(cin, newEmail);
//
//		u->email = newEmail;
//		cout << u->email << endl;
//		return;
//	case 4:
//		cout << "Enter new phone number: ";
//		getline(cin, newPhone);
//
//		u->phonenum = newPhone;
//		cout << u->phonenum << endl;
//		return;
//	default:
//		break;
//	}
//}
//
//void DisplayInactive()
//{
//	//check for inactive user 
//	//call deleteUser once inactive user is found	
//	user* current = userhead;
//	while (current != NULL && !current->status)
//	{
//		cout << "ID: " << current->id << endl;
//		cout << "Username: " << current->username << endl;
//		cout << "Email: " << current->email << endl;
//		cout << "Address: " << current->address << endl;
//		cout << "Phone Number: " << current->phonenum << endl;
//		cout << "Status: " << current->status << endl << endl;
//		cout << string(50, '=') << endl;
//		current = current->nextAddress;
//	}
//}
//
//void DeleteFromEnd()
//{
//	if (userhead == NULL)
//	{
//		return;
//	}
//
//	user* current = usertail;
//	usertail = usertail->prevAddress;
//	if (usertail != NULL)
//	{
//		usertail->nextAddress = NULL;
//	}
//	else
//	{
//		userhead = NULL;
//	}
//	delete current;
//}
//
//void deleteFromFront()
//{
//	if (userhead == NULL)
//	{
//		return;
//	}
//	user* current = userhead;
//	userhead = userhead->nextAddress;
//	if (userhead != NULL)
//	{
//		userhead->prevAddress = NULL;
//	}
//	else
//	{
//		usertail = NULL;
//	}
//}
//
//void deleteuser(int id)
//{
//	user* dummy = userhead;
//
//	if (id == 1)
//	{
//		deleteFromFront();
//	}
//	else if (id == userSize)
//	{
//		DeleteFromEnd();
//	}
//	else if (id > 1 && id < userSize)
//	{
//		while (dummy->id != id)
//		{
//			dummy = dummy->nextAddress;
//		}
//
//		dummy->prevAddress->nextAddress = dummy->nextAddress;
//		dummy->nextAddress->prevAddress = dummy->prevAddress;
//
//	}
//	else
//	{
//		cout << "Invalid Input" << endl;
//	}
//
//	cout << dummy->username << " is deleted" << endl << endl;
//	cout << string(50, '=') << endl;
//	delete(dummy);
//	DisplayUser();
//}
//
//void DeleteUser()
//{
//	int user, choice;
//	cout << string(50, '=') << endl;
//	cout << "1. Display All User" << endl;
//	cout << "2. Display Inactive User" << endl;
//	cout << "Enter your choice: ";
//	cin >> choice;
//	if (choice == 1)
//	{
//		DisplayUser();
//	}
//	else if (choice == 2)
//	{
//		DisplayInactive();
//	}
//	else
//	{
//		cout << string(15, '*') << endl << endl;
//		cout << "Invalid Input! (" << choice << ")" << endl;
//		cout << "Please enter a valid choice" << endl;
//		cout << string(15, '*') << endl << endl;
//		DeleteUser();
//	}
//	cout << "Which user do you want to delete? " << endl;
//	cout << "Please enter your choice: ";
//	cin >> user;
//	deleteuser(user);
//}
//
//void DisplayFromFrontList(int i) {
//	int x = 1;
//	FeedbackNode* current = head;
//	while (current != NULL) {
//		if (x == i) {
//			cout << current->PublishDT << endl;
//			cout << current->FeedbackContent << endl;
//			cout << current->FeedbackReply << endl;
//			break;
//		}
//		current = current->NextAdd;
//		x++;
//	}
//}
//
//FeedbackNode* createNewFeedbackNode(string FeedbackContent, string FeedbackReply) {
//	time_t currentTime = time(nullptr);
//	tm localTime{};
//	localtime_s(&localTime, &currentTime);
//	char timeString[100];
//	strftime(timeString, sizeof(timeString), "%d/%m/%Y %H:%M", &localTime);
//
//	FeedbackNode* newnode = new FeedbackNode;
//	newnode->PublishDT = timeString;
//	newnode->FeedbackContent = FeedbackContent;
//	newnode->FeedbackReply = FeedbackReply;
//	newnode->NextAdd = NULL;
//	newnode->PrevAdd = NULL;
//	return newnode;
//}
//
//void InsertToTheFrontOfList(string FeedbackContent, string FeedbackReply) {
//	FeedbackNode* newnode = createNewFeedbackNode(FeedbackContent, FeedbackReply);
//	if (head == NULL)
//	{
//		head = tail = newnode;
//	}
//	else {
//		newnode->NextAdd = head;
//		head->PrevAdd = newnode;
//		head = newnode;
//	}
//	feedbackSize++;
//}
//
//void replyFeedback(string reply, int i) {
//	int x = 1;
//	FeedbackNode* current = head;
//	while (current != NULL) {
//		if (x == i) {
//			current->FeedbackReply = reply;
//			break;
//		}
//		current = current->NextAdd;
//		x++;
//	}
//
//}
//
//void FeedbackPage()
//{
//	int choice = 0;
//	int i = 1;
//	string reply;
//	while (choice != 9 && feedbackSize != 0) {
//		DisplayFromFrontList(i);
//		cout << "1 for next page" << endl << "2 for prev page:" << endl << "3 for reply feedback" << endl << "Enter Your Choice:";
//		cin >> choice;
//		if (choice == 1 && i < feedbackSize) {
//			i++;
//		}
//		else if (choice == 2 && i > 1) {
//			i--;
//		}
//		else if (choice == 3) {
//			cout << "Enter Reply:";
//			cin >> reply;
//			replyFeedback(reply, i);
//		}
//		else {
//			system("cls");
//			cout << "Action Not Available" << endl;
//			//Sleep(1500);
//		}
//		system("cls");
//	}
//}
//
//void AdminPage() {
//	int choice;
//	cout << string(50, '-') << endl;
//	cout << "Hi ,you are now in admin page." << endl;
//	cout << string(50, '-') << endl << endl;
//	cout << "** MENU **" << endl;
//	cout << "1. Display Users" << endl << "2. Modify Users" << endl << "3. Delete Users" << endl << "4. Feedbacks" << endl << "5. List Fav Uni" << endl << "6. Exit" << endl;
//	cout << "Enter your choice: ";
//	cin >> choice;
//	switch (choice) {
//	case 1:
//		DisplayUser();
//		break;
//	case 2:
//		ModifyUser();
//		break;
//	case 3:
//		DeleteUser();
//		break;
//	case 4:
//		FeedbackPage();
//		break;
//
//		/*case 4:
//			FavUni();
//			break;*/
//	default:
//		cout << endl << "Invalid Input!!";
//		system("cls");
//		AdminPage();
//	}
//}
//
//void AdminLogin()
//{
//	Admin admin;
//	string username;
//	string password;
//	cout << "Enter username: ";
//	cin >> username;
//	cout << "Enter password: ";
//	cin >> password;
//	while (username.compare(admin.getUsernmane()) != 0 && password.compare(admin.getPassword()) != 0)
//	{
//		cout << "Enter username: ";
//		cin >> username;
//		cout << "Enter password: ";
//		cin >> password;
//
//	}
//	AdminPage();
//
//}
//
//void Register() {
//	string username;
//	string password;
//	string email;
//	string address;
//	string phonenum;
//	bool status;
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	cout << endl << "Welcome to Register Page!" << endl << (50, '-') << endl;
//	cout << "Name: ";
//	getline(cin, username);
//
//	cout << endl << "Password: ";
//	getline(cin, password);
//
//
//	cout << endl << "Email: ";
//	getline(cin, email);
//	cout << endl << "Address: ";
//	getline(cin, address);
//	cout << endl << "Phone Number: ";
//	getline(cin, phonenum);
//	status = true;
//	cout << endl << "Registration Successful!!" << endl;
//	insertToEnd(username, password, email, address, phonenum, status);
//	char choice;
//	cout << endl << "Press 'M' to return to main menu or other key to exit. ";
//	cin >> choice;
//	if (choice == 'M' || choice == 'm')
//		return; // Return true to indicate returning to main menu
//	else
//		ExitPage();
//}
//
//void UserPage() {
//	int choice;
//	cout << string(50, '-') << endl;
//	cout << endl << "Hi " << currentuser->username << " ,you are now in user page." << endl;
//	cout << string(50, '-') << endl << endl;
//	cout << "** MENU **" << endl;
//	cout << "1. Display University" << endl << "2. Sort University" << endl << "3. Search University" << endl << "4. Save Favourites" << endl;
//	cout << "5. Display Favourites" << endl << "6. Feedback" << endl << "7. Exit" << endl;
//	cout << "Enter your choice: ";
//	cin >> choice;
//	switch (choice) {
//	case 1:
//		DisplayUni();
//		break;
//	case 2:
//		SortUniBy();
//		break;
//	case 3:
//		SearchUni();
//		break;
//	case 4:
//		FavUni(currentuser);
//		break;
//	case 5:
//		DisplayFavUni(currentuser);
//		break;
//	case 6:
//		//feedback
//		break;
//	case 7:
//		return;
//	default:
//		cout << endl << "Invalid Input!!";
//		system("cls");
//		UserPage();
//	}
//}
//
//void UserLogin() {
//	string username;
//	string password;
//	bool loggedIn = false;
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	if (userhead == NULL) //list is empty
//	{
//		cout << "Empty List!" << endl;
//		return;
//	}
//	user* current = userhead;
//	cout << "Enter Username: ";
//	getline(cin, username);
//	while (current != NULL && !loggedIn)
//	{
//		if (current->username.compare(username) == 0)
//		{
//			while (!loggedIn) {
//
//				cout << endl << "Enter Password: ";
//				getline(cin, password);
//
//				if (current->password.compare(password) == 0)
//				{
//					cout << endl << "User Found!" << endl;
//					loggedIn = true;
//					currentuser = current;
//					UserPage();
//				}
//				else {
//					cout << endl << "Invalid Password" << endl;
//				}
//			}
//		}
//		current = current->nextAddress;
//	}
//	if (!loggedIn) {
//		cout << endl << "Username Not Found!!"<<endl;
//		//system("cls");
//		//UserLogin();
//	}
//}
//
//void LoginPage() {
//	int choice;
//	cout << endl << "Login Page";
//	cout << endl << "1. User" << endl << "2. Admin" << endl;
//	cout << "Enter your choice: ";
//	cin >> choice;
//	switch (choice) {
//	case 1:
//		UserLogin();
//		break;
//	case 2:
//		AdminLogin();
//		break;
//	default:
//		cout << endl << "Invalid Input!!"<<endl;
//		system("cls");
//		LoginPage();
//	}
//}
//
//void GuestPage() {
//	int choice = 0;
//	bool status = true;
//	string username, email, address, phonenum, password;
//	cout <<endl<< string(50, '-') <<endl;
//	cout << "*Hi, you are now in guest page*" << endl;
//	cout << string(50, '-') << endl << endl;
//	cout << "** MENU **" << endl;
//	cout << "1. Display University" << endl << "2. Sort University" << endl << "3. Search University" << endl << "4. Resgister" << endl << "5. Exit" << endl;
//	cout << "Enter your choice: ";
//	cin >> choice;
//	switch (choice) {
//	case 1:
//		DisplayUni();
//		break;
//	case 2:
//		SortUni();
//		break;
//	case 3:
//		searchinstitution();
//		break;
//	case 4:
//		Register();
//		break;
//	case 5:
//		ExitPage();
//	default:
//		cout << endl << "Invalid Input!"<<endl;
//		system("cls");
//		GuestPage();
//	}
//}
//
//int main() {
//	//Menu page
//	unihead = NULL;
//	userhead = NULL;
//	int choice1 = 0;
//	bool status = true;
//	insertToEnd("Celine Dion", "Just Walk Away", "gmail", "Bukit Jalil", "12345", false);
//	insertToEnd("Ben", "pword", "gmail", "puchong", "12345", true);
//	insertToEnd("John", "Just Walk Away", "gmail", "subang", "12345", true);
//
//	InsertToTheFrontOfList("Good", "Thank");
//	InsertToTheFrontOfList("Goods", "Thanks");
//	InsertToTheFrontOfList("Goodss", "Thankss");
//	InsertToTheFrontOfList("Goodsss", "Thanksss");
//	string username, email, address, phonenum, password;
//
//	ifstream file("university.csv");
//	string rank, name, loc, location, ars, arr, ers, err, fsrs, fsrr, cpfs, cpfr, ifrs, ifrr, isrs, isrr, irns, irnr, gers, gerr, score;
//
//	if (file.is_open())
//	{
//		cout << ":>" << endl;
//	}
//	else
//	{
//		cout << ":<" << endl;
//	}
//
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
//		getline(file, score);
//		if (name == "Institution") {
//			continue;
//		}
//		else if (rank == "") {
//			break;
//		}
//
//		InsertToEndUni(rank, name, loc, location, ars, arr, ers, err, fsrs, fsrr, cpfs, cpfr, ifrs, ifrr, isrs, isrr, irns, irnr, gers,
//			gerr, score);
//	}
//	file.close();
//	bool exitProgram = false;
//	do {
//		cout << string(50, '-') << endl;
//		cout << endl << "* Hi, Welcome to University Recommendation System*" << endl;
//		cout << string(50, '-') << endl << endl;
//		cout << "MENU" << endl;
//		cout << "1. Sign Up" << endl << "2. Login" << endl << "3. Continue as Guest" << endl << "4. Exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> choice1;
//		switch (choice1) {
//		case 1:
//			Register();
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
//			cout << "Please select from the options given above!" << endl;
//			system("cls");
//			main();
//		}
//	} while (!exitProgram);
//	return 0;
//}