#ifndef PUBLISHER_H_
#define PUBLISHER_H_

#include "TableImp.h" // TODO: move to outer include folder
#include <string>

using std::string;

class PublishTable : public BasicTable {
public:
    PublishTable(const vector<ConstantSP>& cols, const vector<string>& colNames, const ConstantSP& resource,
                 const string& topic, Heap* heap);

    virtual bool append(vector<ConstantSP>& values, INDEX& insertedRows, string& errMsg);

private:
    SessionSP session_;
    ConstantSP resource_;
    string topic_;
    vector<ConstantSP> cols_;
    vector<string> colNames_;
};

#endif