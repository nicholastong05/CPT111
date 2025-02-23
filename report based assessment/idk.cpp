#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Constants
const int MAX_BOOKS = 100;
const int MAX_REVIEWS = 1000;
const int MAX_RATINGS = 100;

// Book Data
string bookIDs[MAX_BOOKS];
string bookTitles[MAX_BOOKS];
int bookCount = 0;

// Review Data
string reviewBookIDs[MAX_REVIEWS];
string usernames[MAX_REVIEWS];
int ratings[MAX_REVIEWS];
string comments[MAX_REVIEWS];
int reviewCount = 0;

// Rating Data
string ratingBookIDs[MAX_RATINGS];
int numRatings[MAX_RATINGS];
double avgRatings[MAX_RATINGS];
int goodreadsRatings[MAX_RATINGS];
int ratingCount = 0;

// Function Prototypes
void loadBooks();
void loadReviews();
void loadRatings();
void displayBooks();
void displayReviews();
void displayRatings();
void addNewBook();
bool isValidBookIDFormat(string bookID);
void addReview();
void listReviewsByBook();
void listReviewsByUser();
void updateAverageRating(string bookID, int newRating);
void appendDataToFile();

int main() {
    // Load data from files
    loadBooks();
    loadReviews();
    loadRatings();
    
    cout << "Welcome to TongTongBookz\n";

    int choice;
    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Display Book List\n";
        cout << "2. Display Review List\n";
        cout << "3. Display Average Ratings\n";
        cout << "4. Add New Book\n";
        cout << "5. Add New Review\n";
        cout << "6. List Reviews by Book\n";
        cout << "7. List Reviews by User\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        
        switch (choice) {
            case 1:
                displayBooks();
                break;
            case 2:
                displayReviews();
                break;
            case 3:
                displayRatings();
                break;
            case 4:
            	addNewBook();
            	break;
            case 5:
                addReview();
                break;
            case 6:
                listReviewsByBook();
                break;
            case 7:
                listReviewsByUser();
                break;
            case 8:
                cout << "Thanks for using TongTongBookz. Exiting the program...\n";
                appendDataToFile();  // Save data to files before exiting
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 8);

    return 0;
}

// Function Definitions

// Load the book list from booklist.txt
void loadBooks() {
    ifstream file("booklist.txt");
    if (!file) {
        cout << "Error: Could not open booklist.txt file!" << endl;
        return;
    }

    // Read each line from the file
    while (file) {
        string id, title;
        getline(file, id, '\t');  // Read book ID
        getline(file, title);     // Read book title

        // Skip empty or malformed lines by checking the length of the strings
        if (id.length() == 0 || title.length() == 0) {
            continue;
        }

        // Store book data
        bookIDs[bookCount] = id;
        bookTitles[bookCount] = title;
        bookCount++;
    }

    file.close();
}

// Load the reviews from ratinglist.txt
void loadReviews() {
    ifstream file("ratinglist.txt");
    if (!file) {
        cout << "Error: Could not open ratinglist.txt file!" << endl;
        return;
    }

    // Read each review entry from the file
    while (file) {
        string bookId, username, comment;
        int rating;
        getline(file, bookId, '\t');   // Read book ID until tab
        getline(file, username, '\t'); // Read username until tab
        file >> rating;                // Read rating as integer
        file.ignore();                 // Skip tab after rating
        getline(file, comment);        // Read comment

        // Skip empty or malformed lines by checking string lengths
        if (bookId.length() == 0 || username.length() == 0 || comment.length() == 0) {
            continue;
        }

        // Store review data
        reviewBookIDs[reviewCount] = bookId;
        usernames[reviewCount] = username;
        ratings[reviewCount] = rating;
        comments[reviewCount] = comment;
        reviewCount++;
    }

    file.close();
}

// Load the average ratings from averageratinglist.txt
void loadRatings() {
    ifstream file("averageratinglist.txt");
    if (!file) {
        cout << "Error: Could not open averageratinglist.txt file!" << endl;
        return;
    }

    string bookId;
    int numRating;
    double avgRating;
    int goodreadsRating;

    // Read each rating entry from the file
    while (file >> bookId >> numRating >> avgRating >> goodreadsRating) {
        file.ignore();  // Ignore the newline character or any remaining characters on the line

        // Validate data before storing
        if (bookId.length() != 0 && numRating > 0 && avgRating >= 0 && goodreadsRating >= 0) {
            ratingBookIDs[ratingCount] = bookId;
            numRatings[ratingCount] = numRating;
            avgRatings[ratingCount] = avgRating;
            goodreadsRatings[ratingCount] = goodreadsRating;
            ratingCount++;
        }
    }

    file.close();
}

// Display the list of books
void displayBooks() {
    cout << "--- Book List ---\n";
    for (int i = 0; i < bookCount; i++) {
        cout << "Book ID: " << bookIDs[i] << ", Title: " << bookTitles[i] << endl;
    }
}

// Display the list of reviews
void displayReviews() {
    cout << "--- Review List ---\n";
    if (reviewCount == 0) {
        cout << "No reviews available.\n";
    } else {
        for (int i = 0; i < reviewCount; i++) {
            cout << "Book ID: " << reviewBookIDs[i] 
                 << ", Username: " << usernames[i] 
                 << ", Rating: " << ratings[i] 
                 << ", Comment: " << comments[i] << endl;
        }
    }
}

// Display average ratings
void displayRatings() {
    cout << "--- Average Ratings ---\n";
    for (int i = 0; i < ratingCount; i++) {
        if (ratingBookIDs[i] == "") continue;

        cout << "Book ID: " << ratingBookIDs[i]
             << ", Number of Ratings: " << numRatings[i]
             << ", Average Rating: " << fixed << setprecision(2) << avgRatings[i]
             << ", Goodreads Rating: " << goodreadsRatings[i] << endl;
    }
}

// Add a new book
void addNewBook() {
    if (bookCount >= MAX_BOOKS) {
        cout << "Error: Cannot add more books. Maximum limit reached.\n";
        return;
    }

    string bookID, bookTitle;
	  
       // Continuously prompt user until a valid Book ID is entered
    do {
        cout << "Enter Book ID (format: xxx111 where 'xxx' are letters and '111' are digits): ";
        cin >> bookID;

        if (!isValidBookIDFormat(bookID)) {
            cout << "Invalid Book ID format! Please try again.\n";
        }
    } while (!isValidBookIDFormat(bookID));

    // Check for duplicate Book ID
    for (int i = 0; i < bookCount; i++) {
        if (bookIDs[i] == bookID) {
            cout << "Error: Book ID already exists in the system.\n";
            return;
        }
    }

    // Get Book Title
    cin.ignore(); // Clear input buffer
    cout << "Enter Book Title: ";
    getline(cin, bookTitle);

    // Add the new book to the system
    bookIDs[bookCount] = bookID;
    bookTitles[bookCount] = bookTitle;
    bookCount++;

    cout << "Book added successfully!\n";

    // Optionally, append the new book to the file
    ofstream file("booklist.txt", ios::app);
    if (file) {
        file << "\n" << bookID << "\t" << bookTitle ;
        file.close();
        cout << "Book saved to file successfully.\n";
    } else {
        cout << "Warning: Could not save the book to the file.\n";
    }
}

 // To check validation of BookID entered
bool isValidBookIDFormat(string bookID) {
    // Check if the Book ID is exactly 6 characters long
    if (bookID.length() != 6) {
        cout << "Error: Book ID must be exactly 6 characters long.\n";
        return false;
    }

    // Check if the first three characters are letters
    for (int i = 0; i < 3; i++) {
        if (!isalpha(bookID[i])) {
            cout << "Error: The first three characters of Book ID must be letters (A-Z or a-z).\n";
            return false;
        }
    }

    // Check if the last three characters are digits
    for (int i = 3; i < 6; i++) {
        if (!isdigit(bookID[i])) {
            cout << "Error: The last three characters of Book ID must be digits (0-9).\n";
            return false;
        }
    }

    return true; // If all checks pass, the format is valid
}

// Add a new review
void addReview() {
    if (reviewCount >= MAX_REVIEWS) {
        cout << "Error: Cannot add more reviews. Maximum limit reached.\n";
        return;
    }

    string bookID, username, comment;
    int rating;

    // Continuously prompt user until a valid Book ID is entered
    do {
        cout << "Enter Book ID (format: xxx111 where 'xxx' are letters and '111' are digits): ";
        cin >> bookID;

        if (!isValidBookIDFormat(bookID)) {
            cout << "Invalid Book ID format! Please try again.\n";
        }
    } while (!isValidBookIDFormat(bookID));


    // Validate Book ID
    bool bookExists = false;
    for (int i = 0; i < bookCount; i++) {
        if (bookIDs[i] == bookID) {
            bookExists = true;
            break;
        }
    }

    // If the book does not exist, ask the user whether they want to add it
    if (!bookExists) {
        cout << "The Book ID does not exist in the system.\n";
        char choice;
        cout << "Do you want to add this book? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            addNewBook();
            // Revalidate after adding the new book
            bookExists = false;
            for (int i = 0; i < bookCount; i++) {
                if (bookIDs[i] == bookID) {
                    bookExists = true;
                    break;
                }
            }

            // If the book still doesn't exist, terminate the review process
            if (!bookExists) {
                cout << "Error: Failed to add the new book. Cannot proceed with the review.\n";
                return;
            }
        } else {
            cout << "Review canceled. Book ID must exist to add a review.\n";
            return;
        }
    }

    // Ask for username
    cout << "Enter Username (Username should be 1 word without space): ";
    cin >> username;

    // Ensure the rating is valid
    do {
        cout << "Enter Rating (1 to 5): ";
        cin >> rating;

        if (rating < 1 || rating > 5) {
            cout << "Invalid rating! Please enter a value between 1 and 5.\n";
        }
    } while (rating < 1 || rating > 5);

    cin.ignore();  // To ignore the newline character after the rating
    cout << "Enter Comment: ";
    getline(cin, comment);

    // Check if the review already exists (same bookID and username)
    for (int i = 0; i < reviewCount; i++) {
        if (reviewBookIDs[i] == bookID && usernames[i] == username) {
            cout << "Error: This review has already been submitted.\n";
            return;
        }
    }

    // Add review data
    reviewBookIDs[reviewCount] = bookID;
    usernames[reviewCount] = username;
    ratings[reviewCount] = rating;
    comments[reviewCount] = comment;
    reviewCount++;

    // Update the average rating for the book
    updateAverageRating(bookID, rating);

    cout << "Review added successfully!\n";
}

// List reviews by book ID
void listReviewsByBook() {
    string bookID;
    cout << "Enter Book ID to list reviews: ";
    cin >> bookID;
    
    bool found = false;
    cout << "--- Reviews for Book ID: " << bookID << " ---\n";
    for (int i = 0; i < reviewCount; i++) {
        if (reviewBookIDs[i] == bookID) {
            cout << "Username: " << usernames[i] 
                 << ", Rating: " << ratings[i] 
                 << ", Comment: " << comments[i] << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No reviews found for this Book ID.\n";
    }
}

// List reviews by username
void listReviewsByUser() {
    string username;
    cout << "Enter Username to list reviews: ";
    cin >> username;
    
    bool found = false;
    cout << "--- Reviews by User: " << username << " ---\n";
    for (int i = 0; i < reviewCount; i++) {
        if (usernames[i] == username) {
            cout << "Book ID: " << reviewBookIDs[i] 
                 << ", Rating: " << ratings[i] 
                 << ", Comment: " << comments[i] << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No reviews found for this Username.\n";
    }
}

// Update the average rating of a book
void updateAverageRating(string bookID, int newRating) {
    bool found = false;
    for (int i = 0; i < ratingCount; i++) {
        if (ratingBookIDs[i] == bookID) {
            // Update number of ratings
            numRatings[i]++;
            
            // Update average rating (weighted average formula)
            avgRatings[i] = ((avgRatings[i] * (numRatings[i] - 1)) + newRating) / numRatings[i];

            // Update Goodreads rating if the new rating is 5
            if (newRating == 5) {
                goodreadsRatings[i]++;
            }
            
            found = true;
            break;
        }
    }

    // If bookID is not found, add a new entry
    if (!found) {
        if (ratingCount < MAX_RATINGS) {
            ratingBookIDs[ratingCount] = bookID;
            numRatings[ratingCount] = 1;
            avgRatings[ratingCount] = newRating;
            goodreadsRatings[ratingCount] = (newRating == 5) ? 1 : 0;
            ratingCount++;
        } else {
            cout << "Error: Cannot add more ratings. Maximum limit reached.\n";
        }
    }
}

// Append data to the files (reviews and ratings)
void appendDataToFile() {
    // --- Append Reviews ---
    {
        ifstream reviewFileIn("ratinglist.txt");
        if (!reviewFileIn) {
            cout << "Error: Could not open ratinglist.txt for reading!\n";
            return;
        }

        string line;
        string existingReviews[MAX_REVIEWS];
        int existingReviewCount = 0;

        // Read all the existing reviews into an array
        while (getline(reviewFileIn, line)) {
            existingReviews[existingReviewCount] = line;
            existingReviewCount++;
        }
        reviewFileIn.close();

        ofstream reviewFileOut("ratinglist.txt", ios::app);
        if (!reviewFileOut) {
            cout << "Error: Could not open ratinglist.txt for appending!\n";
            return;
        }

        // Append new reviews, avoiding duplicates
        for (int i = 0; i < reviewCount; i++) {
            string newReview = reviewBookIDs[i] + '\t' + usernames[i] + '\t' + to_string(ratings[i]) + '\t' + comments[i];

            bool isDuplicate = false;

            // Check if the new review is already in the file
            for (int j = 0; j < existingReviewCount; j++) {
                if (existingReviews[j] == newReview) {
                    isDuplicate = true;
                    break;
                }
            }

            // Append only if it's not a duplicate
            if (!isDuplicate) {
                reviewFileOut << endl << newReview;
            }
        }
        reviewFileOut.close();
    }

    // --- Append Ratings to averageratinglist ---
    {
        // --- Read Existing Ratings ---
        ifstream ratingFileIn("averageratinglist.txt");
        if (!ratingFileIn) {
            cout << "Error: Could not open averageratinglist.txt for reading!\n";
            return;
        }

        string existingRatings[MAX_RATINGS];
        int existingRatingCount = 0;

        string line;
        while (getline(ratingFileIn, line)) {
            existingRatings[existingRatingCount] = line;
            existingRatingCount++;
        }
        ratingFileIn.close();

        // --- Process New Ratings ---
        bool isUpdated = false;
        for (int i = 0; i < ratingCount; i++) {
            string newRating = ratingBookIDs[i] + '\t' + to_string(numRatings[i]) + '\t' + to_string(avgRatings[i]) + '\t' + to_string(goodreadsRatings[i]);

            bool isDuplicate = false;

            // Check if the new rating already exists based on the Book ID
            for (int j = 0; j < existingRatingCount; j++) {
                if (existingRatings[j] == newRating) {
                    isDuplicate = true;
                    break;
                }
            }

            // If not duplicate, append it
            if (!isDuplicate) {
                ofstream ratingFileOut("averageratinglist.txt", ios::app);
                if (!ratingFileOut) {
                    cout << "Error: Could not open averageratinglist.txt for appending!\n";
                    return;
                }

                ratingFileOut << endl << newRating;
                ratingFileOut.close();
                isUpdated = true;
            }
        }

        if (!isUpdated) {
            cout << "No new ratings to append.\n";
        }
    }
}

