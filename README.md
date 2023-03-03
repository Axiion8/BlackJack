[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=9905501&assignment_repo_type=AssignmentRepo)

# Blackjack
 > Authors: [Anderson Wu (anderthenoob)](https://github.com/anderthenoob),
            [Casey Le (Axiion8)](https://github.com/Axiion8),
            [Justin An (anj501)](https://github.com/anj501),
            [Kyle Taing (KyleTaing)](https://github.com/KyleTaing),

## Project Description
 > When deciding on our project, we wanted to make a project that could be enjoyed over a long period of time as well as making a project that was easy to understand or already well known in terms of rules and how it's played. That's how we decided on making a blackjack project in order to fulfill those goals we had in mind. We're going to be using C++ for our project. This blackjack game includes a stack of cards without the 2 joker cards. You are given an amount of credits and if the your credits gets to 0 you are unable to play. The dealer is going to pass out 2 cards to itself (only revealing 1 card) and 2 cards to the player. After seeing the 2 cards, the player is going to have the options to hit (takes another card from the card stack), stand (take no more cards), double down (double the wager, take one more card and stand), split (this option is only avalable if the inital 2 cards given to you are the same value; split your 2 initial cards into 2 hands doubling your wager), and surrender (give up half of the bet and give up the hand). The project is expected to output the status of the blackjack game which includes, the player's hand, the dealer's hand, with the addition to different playstyle options mentioned before.
 > 
 > ## Phase II
 > In our project, everything will be reliant on the card class. The card class holds the value of each card, its respective suit, and the card's name. The deck class will store all our card objects in a vector which will be distributed to a player's hand. In the hand function, there will be functions that check if the hand's value will bust or count as a blackjack—while also has functions that manipulate the cards in the chosen hand, so drawing, viewing, and discarding the hand after the round is over. The player and dealer class will depend on the hand class, as most of their functions will be used to manipulate the hand. This means hitting, standing, and splitting the hand. The player class will additionally have the option to see their name, how much money they currently have, how much they want to bet, and the additional options to double down or surrender during the round.

 > Card Class:
 > * setValue(int) sets cardValue
 > * setName(string) sets name
 > * setSuit(string) sets suit
 > * getValue() returns the cardValue
 > * getName() returns the name
 > * getSuit() returns the suit
 > 
 > Deck Class:
 > * generateDeck() generates a vector with 52 Card object
 > * shuffleDeck() mixes up order the of the vector
 > * drawCardDeck() returns a deleted Card object from the vector
 > Hand Class:
 > * checkBustHand() returns true if handValue is larger than 21
 > * checkJackHand() returns true if hadnValue is equals to 21 
 > * getValueHand() returns handValue
 > * drawCardHand() calls drawCardDeck() from deck class (adds a card from deck to hand)
 > * viewHand() let player see his cards
 > * clearHand() clears the Hand<>
 > Dealer Class:
 > * dealerDraw() calls drawCardHand()
 > Player Class:
 > * getName() sets name
 > * viewMoney() returns money
 > * howManyHands() returns the number of hands
 > * hit() calls drawCardHand()
 > * stand() ends round, dealer's turn
 > * doubleDown() double the bet, hit once and stand
 > * splitHands() creates one more hand
 > * surrender() give up half of the bet and lose game

## Class Diagram
 > ![image](https://user-images.githubusercontent.com/84153224/218648136-7c391936-e96d-4a89-9c64-301090ace5fd.png)

 
 > ## Phase III
 > After looking at our class diagram, we applied SOLID principles to make the project more concise and manageable. We applied Single Responsibility Principle (SRP) and Open-Closed Principle (OCP) to our class diagram. We first used SRP for the Card class to represent the playing card. The change was for the card class to be separate from the deck class where the Card class would be able to set and get the suit and value of the card. This allows the Card class to be independent of the Deck class where it's more flexible and functional. The SRP helped us make our code more organized and have a single purpose for the Card class. Next we applied another SRP, to our Hand Class which represents management of your hand. We applied this principle by having the Hand Class only have functionality for the player’s hand and doesn’t do anything else. This change of adding the Hand Class helped with only having one purpose to the class and not having it so disorganized. Finally, we applied the OCP where we have the Deck class and don’t need to modify the Card class if we wanted to add features to the Deck class. Since incorporating the Deck Class we don’t have to change the existing functions and are able to add more functions without changing the existing code. The OCP helps with managing new functions and we don’t have to worry about changing existing code in order to implement new functions to the class. 
 > ## New Class Diagram
 > ![newuml](https://user-images.githubusercontent.com/110501128/222846844-a4f08acb-28f8-4927-a7ee-718db08c8ce7.png)

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
