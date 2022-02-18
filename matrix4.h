#pragma once
class Matrix4
{
public:
    float matrixVals[16];

    Matrix4();
    Matrix4(float val1, float val2, float val3, float val4, float val5, float val6, float val7, float val8, float val9, float val10, float val11, float val12, float val13, float val14, float val15, float val16);
    Matrix4(float arrayVals[16]);
    Matrix4(const Matrix4& sourceMatrix);
    virtual ~Matrix4();

    //Calculate determinant
    float determinant();

    //Matrix addition
    friend Matrix4& operator+(const Matrix4& LHS, const Matrix4& RHS);
    //Scalar amplification
    friend Matrix4& operator*(const Matrix4& inMatrix, const float amp);
    //Cross product
    friend Matrix4& operator*(const Matrix4& matA, const Matrix4& matB);
    //Get cell value at row col
    friend float& operator()(const int& row, const int& col); //For some reason no friend keyword allows the overload
    friend float operator()(const int& row, const int& col) const;

private:
};