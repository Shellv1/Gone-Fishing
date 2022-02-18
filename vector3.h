#pragma once
class Vector3
{
public:
    float x;
    float y;
    float z;

    Vector3();
    Vector3(float xComponent, float yComponent, float zComponent);
    Vector3(const Vector3& sourceVector);
    virtual ~Vector3();

    //uses x, y, and z components to calculate magnitude
    friend float magnitude();
    //uses normalization to calculate the direction of the vector
    friend float normalization();
    
    //Vector addition
    friend Vector3& operator+(const Vector3& LHS, const Vector3& RHS);
    //Scalar amplification
    friend Vector3& operator*(const Vector3& inVector, cosnt int amp);
    //Dot product
    friend int operator*(const Vector3& vectA, const Vector3& vectB);
    //Cross product
    friend Vector3& operator%(const Vector3& vectA, const Vector3& vectB);

private:
};