enum Suit{
	DIAMOND, CLUB, HEART, SPADE;
}
enum Rank{
	ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING;
}
public class deck {
    private card[] cards = new card[52];

    public deck() {
        initializeDeck();
    }

    private void initializeDeck() {
//    	Suit[] suits = Suit.values();
//    	Rank[] ranks = Rank.values();
        int a = 0;

       for(Suit suit : Suit.values()) {
    	   for (Rank rank: Rank.values()) {
               cards[a] = new card(suit, rank);
               a++;
           }
       }
    }

    public void print() {
        for (card card : cards) {
            System.out.println(card.toString());
        }
    }
}