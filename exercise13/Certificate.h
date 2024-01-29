#ifndef CERTIFICATE_H
#define CERTIFICATE_H
#include <iostream>
#include <chrono>
using namespace std;

class Certificate
{
private:
    /* data */
    string certificatedID;
    string certificateName;
    string certificateRank;
    unsigned int certificatedDate;

public:
    Certificate(/* args */);
    Certificate(const string &certificateID, const string &certificateName, const string &certificateRank, const unsigned int &certificatedDate);
    ~Certificate();

    // Getter methods
    string getCertificatedID() const;
    string getCertificateName() const;
    string getCertificateRank() const;
    unsigned int getCertificatedDate() const;

    // Setter methods
    void setCertificatedID(const string &certificateID);
    void setCertificateName(const string &certificateName);
    void setCertificateRank(const string &certificateRank);
    void setCertificatedDate(const unsigned int &certificatedDate);
};

#endif // !CERTIFICATE_H