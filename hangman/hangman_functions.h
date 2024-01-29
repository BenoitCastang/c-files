#ifndef HANGMAN_FUNCTIONS_H
#define HANGMAN_FUNCTIONS_H

int replay_menu(int replay);
void draw_hangman(const int guesses);
void if_not_present(const char suggested_letter, int guesses);
void if_present(const char suggested_letter, const int is_present_suggested_letter, const char word_to_guess[]);
void check_letter_presence(const char word_to_guess[], const char suggested_letter, int * is_present_suggested_letter, int suggested_letter_presence_cases[], int letter_case);
void hide_word(const char word_to_guess[], char word_being_guessed[]);

#endif