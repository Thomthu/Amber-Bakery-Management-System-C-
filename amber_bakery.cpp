#include <iostream>//header file library,work with input and output objects,eg-cout,cin
#include <vector>//used to store elements of similar data types.dynamic arrays
using namespace std;

struct bak_item{//structure for bakery items
  int item_id;//memebers of strcture are id,name,price and quantity
  string name;//std:: is a standard library in c++
  float price;
  int quantity;
};

vector<bak_item>items;//vector is like dynamic sizing array
                     //vector name is items
bak_item Temp_item;//instance
                  //instance name is Tem_item;

struct item_sales{// structure for items sales
  int sales_id;
  int bakery_item_id;
  int total_sold;
  float total_income;
};

vector<item_sales> sales;
item_sales Temp_sale;


int main(){

//login validation for user
string username;
string password;
cout<<"Your username:";
cin>>username;
cout<<"Your password:";
cin>>password;
cout<<"-----------------------------------\n";
if(username=="harshan22" && password=="2001Hh"){
  //endless loop to run the code
  while(0==0){
    cout<<"Amber Bakery Management System:\n";
    cout<<"1.Add item\n";
    cout<<"2.Update item\n";
    cout<<"3.Delete item\n";
    cout<<"4.Display all items\n";
    cout<<"5.Display specific item\n";
    cout<<"6.Manage sales\n";
    cout<<"7.Manage packages\n";
    cout<<"8.About Amber bakery\n";
    cout<<"9.Exit\n";
    int func;
    //specifying main function to do
    cout<<"select what to do(1,2,3,4,5,6,7,8,9):";
    cin>>func;
    if(func==1){//add item function
      cout<<"---Add new item---\n";
      
      cout<<"Item id:";
      cin>>Temp_item.item_id;
      cout<<"Item name:";
      cin>>Temp_item.name;
      cout<<"Item price:";
      cin>>Temp_item.price;
      cout<<"Item quantity:";
      cin>>Temp_item.quantity;
      items.push_back(Temp_item);//push_back() built-in function
      cout<<"1 item successfully added\n";
      cout<<"----------------------\n";
    }
    else if(func==2){//update item function
      cout<<"---Update an Item---\n";
      int UP_ID;
      cout<<"Enter ID to find:";
      cin>>UP_ID;//id to update
      
      for(int i=0;i<items.size();i++){//loop to travel between items entered
        if(items[i].item_id==UP_ID){//comparing to updating ID
          cout<<"item id:"<<items[i].item_id<<"\n"
          <<"name:"<<items[i].name<<"\n"
          <<"price:"<<items[i].price<<"\n"
          <<"quantity:"<<items[i].quantity<<endl;//"endl" go to new line
          
          //entering new name,price and quantity for found item
          string new_name;
          float new_price;
          int new_quantity;
          cout<<"Item new name:";
          cin>>new_name;
          items[i].name=new_name;
          cout<<"Item new price:";
          cin>>new_price;
          items[i].price=new_price;
          cout<<"Item new quantity:";
          cin>>new_quantity;
          items[i].quantity=new_quantity;
          cout<<"Updated.\n";
          cout<<"-------------";
        }
      }            
    }
    else if(func==3){//delete item function
      cout<<"---Delete an Item---\n";
      int DEL_ID;
      cout<<"Enter id to delete:";
      cin>>DEL_ID;
      for(int i=0;i<items.size();i++){
        if(items[i].item_id==DEL_ID){
          cout<<"item found..\n";
          items.erase(items.begin()+i);//erase method delete the instance.begin method provide 1st instance
          cout<<"item deleted..\n";
        }      
      }
    }
    else if(func==4){//display all function
      cout<<"---Display all Items---\n";
      for(int i=0;i<items.size();i++){
        cout<<"item id:"<<items[i].item_id<<"\n"
        <<"name:"<<items[i].name<<"\n"
        <<"price:"<<items[i].price<<"\n"
        <<"quantity:"<<items[i].quantity<<"\n";
        cout<<"---------------------------------\n";
      }      
    }
    else if(func==5){//display specific item function
      cout<<"---Display an Item---\n";
      int SE_ID;
      cout<<"Enter ID to search:";
      cin>>SE_ID;//id to search
      for(int i=0;i<items.size();i++){
        if(items[i].item_id==SE_ID){
          cout<<"item id:"<<items[i].item_id<<"\n"
          <<"name:"<<items[i].name<<"\n"
          <<"price:"<<items[i].price<<"\n"
          <<"quantity:"<<items[i].quantity<<"\n";
          cout<<"-------------------------------\n";
        }
      }
    }
    else if(func==6){//manage sales function
      cout<<"---Manage sales---\n";
      cout<<"---Add Sales details---\n";
      cout<<"Sales id:";
      cin>>Temp_sale.sales_id;
      cout<<"Bakery item id:";
      cin>>Temp_sale.bakery_item_id;
      cout<<"Total sold:";
      cin>>Temp_sale.total_sold;
      cout<<"Total income:";
      cin>>Temp_sale.total_income;
      sales.push_back(Temp_sale);//push_back() built-in function
      cout<<"1 sales details sucessfully added\n";
      cout<<"----------------------\n";

      cout<<"---All Sales details---\n";
      for(int i=0;i<sales.size();i++){//loop to travel through all elements
        cout<<"Sales id:"<<sales[i].sales_id<<"\n"
        <<"Bakery item id:"<<sales[i].bakery_item_id<<"\n"
        <<"Total sold:"<<sales[i].total_sold<<"\n"
        <<"Total income:"<<sales[i].total_income<<endl;
      }    
    }
    else if(func==7){//manage packages function
      cout<<"---Manage packages---\n";
      cout<<"-------for future development-------\n";
    }
    else if(func==8){//company info
      cout<<"--Amber bakery--\n";
      cout<<"-Amber bakery is one of the very famous pastry shops in UK.\n";
      cout<<"-We offer different kinds of cakes, desserts, breads, cookies like delicious bakery products and other wonderful items\n";
      cout<<"-Range of beverages and coffee is also available for out customers.\n";
      cout<<"-------------------------------------------------------------------------------------------------------------------------\n";
      cout<<"Address:Western Ave, Cardiff CF5 2YB, United Kingdom\n";
      cout<<"Phone: +44 29 2041 6070\n";
      cout<<"--------------------------------------------------------------------------------\n";
    }
    else if(func==9){//exit function
      cout<<"---Exiting---";
      exit(0);
    }
    else{
      cout<<"Incorrect input. try again";
    }
  }
} 
else if(username!="harshan22" || password!="2001Hh"){
    cout<<"Incorrect username or password.Try again..";
}
else if(username==" " && password==" "){
    cout<<"Empty.Try again..";
}  
}

