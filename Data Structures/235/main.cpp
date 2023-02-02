#include <iostream>
#include <vector>
#include <string>
#include "Post.hpp"
#include "Account.hpp"
#include "Network.hpp"
#include "LinkedList.hpp"
#include "Promotional.hpp"
#include "General.hpp"
#include "Poll.hpp"


int main(){
    
    Network<Account> network;
    Account acc1, acc2, acc3, acc4, acc5;
    acc1.setUsername("emmy12");
    acc2.setUsername("lunabelle");
    acc3.setUsername("chewie9");
    acc4.setUsername("lewy1");
    acc5.setUsername("iamlori");
    network.addAccount(&acc1);
    network.addAccount(&acc2);
    network.addAccount(&acc3);
    network.addAccount(&acc4);
    network.addAccount(&acc5);

    std::cout << "Account 1 Follows Account chewie9? (should return true): " << acc1.followAccount("lunabelle") << std::endl;
    std::cout << "Account 2 Follows Account chewie9? (should return true): " << acc1.followAccount("chewie9") << std::endl;
    std::cout << "Account 2 Follows Account chewie9? (should return true): " << acc2.followAccount("lewy1") << std::endl;
    std::cout << "Account 2 Follows Account chewie9? (should return true): " << acc3.followAccount("iamlori") << std::endl;
    std::cout << "Account 2 Follows Account chewie9? (should return true): " << acc1.followAccount("iamlori") << std::endl;
    
    //create Posts by referencing the objects of the Post abstract class using the subclasses
    Post* p1 = new General("Question of the Day", "Should I order pizza?", acc2.getUsername());
    Post* p2 = new General("I want coffee", "I really want coffee!", acc2.getUsername());
    std::vector<std::string> costumes;
    costumes.push_back("UPS Driver");
    costumes.push_back("Scooby Doo");
    costumes.push_back("Captain America");
    Post* p3 = new Poll("Dog Halloween Costumes", "What costume should I dress my dog in?", "chewie9", costumes);
    Post* p4 = new Promotional("Summer sale happening now!", "Visit the link to claim your 15% off and start shopping.", "lewy1", "https://www.glossier.com/");
    
    acc2.addPost(p1);
     // oldest
    acc2.addPost(p2);
    acc3.addPost(p3);
    acc4.addPost(p4); // newest
    // linked list (p4, p3, p2, p1)
    //std::cout << "Should return 4 since we added 4 different posts in the linked list: " << network.sizeOfNetworksFeed() << std::endl; // RETURNS 4

    std::cout << "\n*****Tests viewPosts function:*****\n";
    acc2.viewPosts(); //p2 then p1

    // Task 2 Copy Constructor
    std::cout << "\n*****Tests copy constructor:*****\n";

    Network<Account> copied_network{network}; //copy constructor (explicitly)
    //std::cout << "Should return 4: " << copied_network.sizeOfNetworksFeed() << std::endl; 

    //network.getItemFirstNode()->displayPost();
    //copied_network.getItemFirstNode()->displayPost();

    // Task 2 reverseCopy
    std::cout << "\n*****Tests reverseCopy function:*****\n";
    LinkedList<Post*> posts;
    LinkedList<Post*> reversed_posts; //(p1, p2, p3, p4)
    
    posts.insert(p1, 0);
    posts.insert(p2, 0);
    posts.insert(p3, 0);
    posts.insert(p4, 0);

    reversed_posts.reverseCopy(posts);
    //reversed_posts.displayItems();

    // Task 2 moveItemToTop
    std::cout << "\n*****Test moveItemToTop function:*****\n";
    
    std::cout << "Should return true: " << posts.moveItemToTop(p2) << std::endl; // (p2, p4, p3, p1)
    //posts.displayItems();

    
    /* REMOVE COMMENTS TO REMOVE GIVEN POST
    // Task 2 helper function to remove given post pointer from feed
    std::cout << "\n***** Test removePostFromFeed helper function:*****\n";
    std::cout << "Before post deletion (should return 4): " << network.sizeOfNetworksFeed() << std::endl;
    network.removePostFromFeed(p1);
    std::cout << "After post deletion (should return 3): " << network.sizeOfNetworksFeed() << std::endl;
    */

   
    // Task 2 Account class removePost
    //std::cout << "\n*****Test removePost function:*****\n";
    /*
    //acc2.removePost(p1);
    acc2.viewPosts(); //only p2 is displayed after removePost(p1);

    // Task 2 removeIfContains function
    std::cout << "\n*****Test removeIfContains function:*****\n";
    std::cout << "Before content striking: " << std::endl;
    acc2.viewPosts();
    std::cout << "\nWas the post containing string 'coffee' removed? (should return 2 (b/c 2 posts were removed containing 'I')): " << network.removeIfContains("I") << std::endl;
    std::cout << "Was the post containing string 'day' removed? (should return 0 (b/c 0 posts were removed containing 'day')): " << network.removeIfContains("day") << std::endl;
    std::cout << "After content striking: " << std::endl;
    acc2.viewPosts();
*/
   
    // Task 2 updatePost function
    std::cout << "\n*****Test updatePost function:*****\n";
    acc3.updatePost(p3, "Ooga booga", "");
    acc3.viewPosts();


    

    return 0;
}
