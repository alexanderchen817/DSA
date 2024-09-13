#include <iostream>

using namespace std;


class Song
{
public:
	// Constructor
	Song(string nm, string art, int len);

	// Accessors
	string getName();
	string getArtist();
	int getLength();

private:
	string name;
	string artist;
	int length;
};

class PlayListNode {
public:
	Song song; //data representing a song
	PlayListNode* next; //pointer to next node in list

	// Constructors

	// PARAM: sng = song data, nxt = pointer to next node
	// POST: Sets song to sng and next to nxt
	PlayListNode(Song sng, PlayListNode* nxt) : song(sng), next(nxt) {}

	// PARAM: sng = song data
	// POST: Sets song to sng and next to nullptr
	PlayListNode(Song sng) : song(sng), next(nullptr) {}

};

class PlayList
{
public:
    PlayList() 
    {
        head = nullptr;
        num_songs = 0;
    }

    ~PlayList()
    {
        PlayListNode* current = head;
        // loop through list and delete each node
        while (current != nullptr) {
            PlayListNode* temp = current->next; // store next node
            delete current;
            current = temp; // Move to next node
        }
    }
private:
    PlayListNode* head;
    unsigned int num_songs;
};

int main()
{
    Song* song1 = new Song("bruh", "ok", 100);

    
    return 0;
}