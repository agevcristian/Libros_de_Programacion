/* Classifies a poker hand  */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_CARDS 5

/* external variables */
char hand[NUM_CARDS][2];
int ranks[NUM_RANKS] = {0};
bool straight, flush, four, three;
int pairs; // can be 0, 1 or 2

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/*********************************************************
 * main: Calls read_cards, analyze_hand, and print_result
 *       repeatedly.
 *
 *********************************************************/
int main(void) {

  for (;;) {
    read_cards();
    analyze_hand();
    print_result();
  }

  return 0;
}

/*********************************************************
 * read_cards: Reads the cards into the external
 *             variables num_in_rank and num_in_suit;
 *             checks for bad cards and duplicate cards.
 *********************************************************/
void read_cards(void) {

  char ch, rank_ch, suit_ch;
  int card, rank;
  bool bad_card, is_duplicate;
  int cards_read = 0;

  for (card = 0; card < NUM_CARDS; ++card) {
    hand[card][0] = 0;
    hand[card][1] = 0;
  }

  while (cards_read < NUM_CARDS) {
    bad_card = false;
    is_duplicate = false;

    printf("Enter a card: ");

    ch = getchar();
    switch (ch) {
    case '0':
      exit(EXIT_SUCCESS);
    case '2':
      rank = 0;
      break;
    case '3':
      rank = 1;
      break;
    case '4':
      rank = 2;
      break;
    case '5':
      rank = 3;
      break;
    case '6':
      rank = 4;
      break;
    case '7':
      rank = 5;
      break;
    case '8':
      rank = 6;
      break;
    case '9':
      rank = 7;
      break;
    case 't':
    case 'T':
      rank = 8;
      break;
    case 'j':
    case 'J':
      rank = 9;
      break;
    case 'q':
    case 'Q':
      rank = 10;
      break;
    case 'k':
    case 'K':
      rank = 11;
      break;
    case 'a':
    case 'A':
      rank = 12;
      break;
    default:
      bad_card = true;
    }

    if (!bad_card) {
      rank_ch = ch;
    }

    ch = getchar();
    switch (ch) {
    case 'c':
    case 'C':
    case 'd':
    case 'D':
    case 'h':
    case 'H':
    case 's':
    case 'S':
      suit_ch = ch;
      break;
    default:
      bad_card = true;
    }

    while ((ch = getchar()) != '\n') {
      if (ch != ' ')
        bad_card = true;
    }

    for (card = 0; !bad_card && card < NUM_CARDS; ++card) {
      if (hand[card][0] == rank_ch && hand[card][1] == suit_ch) {
        is_duplicate = true;
        break;
      }
    }

    if (bad_card) {
      printf("Bad card; ignored.\n");
    } else if (is_duplicate) {
      printf("Duplicate card; ignored.\n");
    } else {
      hand[cards_read][0] = rank_ch;
      hand[cards_read][1] = suit_ch;
      ++ranks[rank];
      cards_read++;
    }
  }
}

/***********************************************************
 * analyze_hand: Determines whether the hand contains a
 *               straight, a flush, four-of-a-kind,
 *               and/or three-of-a-kind; determines the
 *               numbers of pairs; stores the result into
 *               the external variable straight, flush,
 *               four, three, and pairs.
 ***********************************************************/

void analyze_hand(void) {
  int card;
  char to_test;
  straight = true;
  flush = true;
  four = false;
  three = false;
  pairs = 0;

  /* checks for flush */
  to_test = hand[0][1];
  for (card = 1; card < NUM_CARDS; ++card) {
    if (hand[card][1] != to_test)
      flush = false;
  }

  /* checks for straight */
  int i = 0;
  int j;

  for (j = 0; j < NUM_RANKS && ranks[j] == 0; ++j)
    ;

  for (; j < NUM_RANKS && ranks[j] == 1 && i < NUM_CARDS; ++j, ++i)
    ;

  if (i < 5) {
    straight = false;
  }

  /* checks for 4-of-a-kind, 3-of-a-kind, and pairs */
  for (j = 0; j < NUM_RANKS; ++j) {
    if (ranks[j] == 4)
      four = true;
    if (ranks[j] == 3)
      three = true;
    if (ranks[j] == 2)
      pairs++;
  }
}

/************************************************************
 * print_result: Prints the classification of the hand,
 *               based on the values of  the external
 *               variables straight, flush, four, three,
 *               and pairs.
 ***********************************************************/
void print_result(void) {
  if (straight && flush)
    printf("Straight flush");
  else if (four)
    printf("Four of a kind");
  else if (three && pairs == 1)
    printf("Full house");
  else if (flush)
    printf("Flush");
  else if (straight)
    printf("Straight");
  else if (three)
    printf("Three of a kind");
  else if (pairs == 2)
    printf("Two pairs");
  else if (pairs == 1)
    printf("Pair");
  else
    printf("High card");

  printf("\n\n");
}
