// TASK: To create "To do list" using c++ with features add,delete,update and view.
#include <iostream>
#include <list>
#include <string>

using namespace std;

struct task {
  string description;
  bool status;
};

// This function is created to update status of task in todo list
void update(list<task> &T_list, string t) {

  cout << "---------------------------" << endl;
  cout << endl;
  for (auto i = T_list.begin(); i != T_list.end(); ++i) {
    if ((*i).description == t) {
      (*i).status = !(*i).status; // toggle status
      cout << "Task status updated successfully!" << endl;
      return;
    }
  }
  cout << "Task not found!" << endl;
}

// This function is created to remove task from todo list
void deletes(list<task> &T_list, const string &t) {
  cout << "---------------------------" << endl;
  cout << endl;

  for (auto i = T_list.begin(); i != T_list.end(); i++) {
    if ((*i).description == t) {
      T_list.erase(i);
      cout << " Your task "
           << "'" << t << "'"
           << "is sucessfully removed" << endl;
      return;
    } else
      cout << "Task" << t << "not found" << endl;
  }
}

// This function is created to view task from todo list
void view(const list<task> &T_list) {

  cout << "---------------------------" << endl;
  cout << "TO DO LIST View option" << endl;
  cout << endl;

  for (auto i = T_list.begin(); i != T_list.end(); i++) {
    cout << "  " << (*i).description << " - "
         << ((*i).status ? "Completed" : "Not completed") << endl;
  }
}

// This function is created to add task in todo list
void add(list<task> &T_list, string t) {
  cout << "---------------------------" << endl;
  task t1;
  t1.description = t;
  t1.status = false;
  T_list.push_back(t1);
  cout << " Your task "
       << "'" << t1.description << "'"
       << "is sucessfully saved" << endl;
}

int main() {
  list<task> T_list;
  cout << " TO DO LIST" << endl;
  while (true) {
    // This are option present in todo list which execute with help of while
    // loop and switch case
    cout << "Features of TO DO LIST" << endl;
    cout << "............................" << endl;
    cout << "1.Add task" << endl;
    cout << "2.View task" << endl;
    cout << "3.Delete task" << endl;
    cout << "4.Update the status of task" << endl;
    cout << "5.Exit" << endl;
    cout << endl;
    cout << "To access about features enter their serial number ";
    int i;
    cin >> i;

    switch (i) {
    case 1: {
      string t;
      cout << endl;
      cout << "ENTER YOUR TASK:";
      getline(cin >> ws, t);
      add(T_list, t);
      cout << endl;
    } break;
    case 2: {
      view(T_list);
      cout << endl;
    } break;
    case 3: {
      string t;
      cout << endl;
      cout << "ENTER YOUR TASK TO REMOVE:";
      getline(cin >> ws, t);
      deletes(T_list, t);
      cout << endl;

    } break;
    case 4: {
      string t;
      cout << endl;
      cout << "ENTER THE TASK TO UPDATE THE STATUS :";
      getline(cin >> ws, t);
      update(T_list, t);
      cout << endl;
    } break;

    case 5: {
      return 0;
    } break;
    default: {
      cout << "---------------------------" << endl;
      cout << endl;
      cout << "INVAILD INPUT" << endl;
      cout << endl;
    }
    }
  }
}