#ifndef ARTICLE_H
#define ARTICLE_H
#include <iostream>
#include <string>
#include "author.cpp"
class Article{
    private:
        std::string title;
        Author author;
        int publicationYear;
        std::string journal;
    public:
        Article()
        : title(), author(Author()), publicationYear(0), journal(""){};

        Article(std::string articleTitle, Author articleAuthor, int publicationYear, std::string journalName)
        : title(articleTitle), author(articleAuthor), publicationYear(publicationYear), journal(journal) {};

        Article(Article &other)
        : title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal){};

        std::string getJournal(){
            return journal;
        };
        int getPublicationYear(){
            return publicationYear;
        };
        Author getAuthor(){
            return Author;
        };
        std::string getTitle(){
            return title;
        };
        void displayInfo(){
            std::cout<< "bsfrgstnyhteafGdhfdnsrgf\n";
        };
};
#endif