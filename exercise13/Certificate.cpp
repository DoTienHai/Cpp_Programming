#include "Certificate.h"

Certificate::Certificate() : certificatedDate(0) {}

Certificate::Certificate(const string &certificateID, const string &certificateName, const string &certificateRank, const unsigned int &certificatedDate)
    : certificatedID(certificateID), certificateName(certificateName), certificateRank(certificateRank), certificatedDate(certificatedDate)
{
}

Certificate::~Certificate() {}

string Certificate::getCertificatedID() const
{
    return certificatedID;
}

string Certificate::getCertificateName() const
{
    return certificateName;
}

string Certificate::getCertificateRank() const
{
    return certificateRank;
}

unsigned int Certificate::getCertificatedDate() const
{
    return certificatedDate;
}

void Certificate::setCertificatedID(const string &certificateID)
{
    certificatedID = certificateID;
}

void Certificate::setCertificateName(const string &certificateName)
{
    this->certificateName = certificateName;
}

void Certificate::setCertificateRank(const string &certificateRank)
{
    this->certificateRank = certificateRank;
}

void Certificate::setCertificatedDate(const unsigned int &certificatedDate)
{
    this->certificatedDate = certificatedDate;
}