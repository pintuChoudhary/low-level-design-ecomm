#include<iostream>

#include"user.h"
#include"inventory.h"
#include"productNotFoundException.h"
#include"notSufficientQuantityException.h"

int main(){
    User u1(1,"User1");
    User u2(2,"User2"); 

    Product p1("tshirts1",new Item(11,"T-Shirts","Red round neck t-shirts"),10.99,10);
    Product p2("denimjeans1",new Item(12,"Denim-Jeans","Blue denim jeans"),14.99,10);
    Product p3("shirts1",new Item(13,"Shirts","White formal shirts"),11.99,10);
    Product p4("shirts2",new Item(14,"Shirts","White and black check shirts"),13.99,10);
    Product p5("tshirts2",new Item(15,"T-Shirts","White Round neck t-shirts"),11.99,10);

    Inventory inventory({&p1,&p2,&p3,&p4,&p5});
    
    std::cout<<"==================== INVENTORY ==================="<<std::endl;
    inventory.displayProducts();

    Product *prod ;
    try {
        prod = inventory.selectProduct("shirts2");
        std::cout<<"Pay Rs."<<prod->buy(8)<<std::endl;
    } catch(ProductNotFoundException *e){
        std::cout<<e->what()<<std::endl;
    }

    std::vector<Product*> searchProductResult = inventory.searchByProductTitle("formal shirt");
    
    std::cout<<"==================== Searched result for "<<"'formal shirt'"<<" ================"<<std::endl;
    for(Product *prod : searchProductResult){
        std::cout<<prod->toString()<<std::endl;
        try{
            std::cout<<"Pay Rs."<<prod->buy(5)<<std::endl;
        } catch(NotSufficientQuantityException *e){
            std::cout<<e->what()<<std::endl;
        }
    }

    std::cout<<"==================== INVENTORY ==================="<<std::endl;
    inventory.displayProducts();
    
    return 0;

}