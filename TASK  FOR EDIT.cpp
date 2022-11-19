void bsKEY()
{
    ifstream file;
    file.open("BSKEY.txt", ios::in);
    char str;
    while (file >> str) {
        cout << str << " ";
        // count++;
    }
    char data;
    int num;
    cout << endl << "Enter the line number you want to change: ";
    cin >> num;
    cout << "Enter the data you want to enter: ";
    cin >> data;
    editExistingDataBS(num,data);
    ifstream file1;
    file1.open("BSKEY.txt", ios::in);
    while (file1 >> str) {
        cout << str << " ";
        // count++;
    }
}
void msKEY()
{
    ifstream file;
    file.open("MSKEY.txt", ios::in);
    char str;
    while (file >> str) {
        cout << str << " ";
        // count++;
    }
    char data;
    int num;
    cout << endl << "Enter the line number you want to change: ";
    cin >> num;
    cout << "Enter the data you want to enter: ";
    cin >> data;
    editExistingDataMS(num,data);
    ifstream file1;
    file1.open("MSKEY.txt", ios::in);
    while (file1 >> str) {
        cout << str << " ";
        // count++;
    }
}
void phdKEY()
{
    ifstream file;
    file.open("PHDKEY.txt", ios::in);
    char str;
    while (file >> str) {
        cout << str << " ";
        // count++;
    }
    char data;
    int num;
    cout << endl << "Enter the line number you want to change: ";
    cin >> num;
    cout << "Enter the data you want to enter: ";
    cin >> data;
    editExistingDataPHD(num,data);
    ifstream file1;
    file1.open("PHDKEY.txt", ios::in);
    while (file1 >> str) {
        cout << str << " ";
        // count++;
    }
}

void editExistingDataBS(int num, char data)
{
    int count =0;
    ifstream file;
    file.open("BSKEY.txt", ios::in);
    char str;
    while (file >> str) {
        // cout << str << endl;
        count++;
    }
    if (num >= count) {
        cout << "Out of Bounds \n";
        return;
    }
    // cout << count;
    file.close();
    file.open("BSKEY.txt",ios::in);
    char arr[count];
    for (int i = 0;!file.eof() && i < count; i++) {
        file >> arr[i];
    }
    file.close();
    arr[num-1] = data;
    ofstream out;
    out.open("BSKEY.txt");
    for(int i = 0;i < count; i++) {
        out << arr[i] << endl;
    }
    out.close();
}
void editExistingDataMS(int num, char data)
{
    int count =0;
    ifstream file;
    file.open("MSKEY.txt", ios::in);
    char str;
    while (file >> str) {
        // cout << str << endl;
        count++;
    }
    if (num >= count) {
        cout << "Out of Bounds \n";
        return;
    }
    // cout << count;
    file.close();
    file.open("MSKEY.txt",ios::in);
    char arr[count];
    for (int i = 0;!file.eof() && i < count; i++) {
        file >> arr[i];
    }
    file.close();
    arr[num-1] = data;
    ofstream out;
    out.open("MSKEY.txt");
    for(int i = 0;i < count; i++) {
        out << arr[i] << endl;
    }
    out.close();
}
void editExistingDataPHD(int num, char data)
{
    int count =0;
    ifstream file;
    file.open("PHDKEY.txt", ios::in);
    char str;
    while (file >> str) {
        // cout << str << endl;
        count++;
    }
    if (num >= count) {
        cout << "Out of Bounds \n";
        return;
    }
    // cout << count;
    file.close();
    file.open("PHDKEY.txt",ios::in);
    char arr[count];
    for (int i = 0;!file.eof() && i < count; i++) {
        file >> arr[i];
    }
    file.close();
    arr[num-1] = data;
    ofstream out;
    out.open("PHDKEY.txt");
    for(int i = 0;i < count; i++) {
        out << arr[i] << endl;
    }
    out.close();
}