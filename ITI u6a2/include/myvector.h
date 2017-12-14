#ifndef MYVECTOR_H
#define MYVECTOR_H


class myvector
{
    public:
        myvector();
        virtual ~myvector();
class vector
{
private:
  float x,y,z;

public:
  // Konstruktoren und Dekonstruktor
  MyVector();
  MyVector(float newX, float newY, float newZ);
  ~vector();

  // Methoden der Klasse
  void print();

  void setValues(float newX, float newY, float newZ);
  void setX(float newX);
  void setY(float newY);
  void setZ(float newZ);

  float getX();
  float getY();
  float getZ();

  float length() const;

  vector add(const vector& vec);
  vector subtract(const vector& vec);

  vector mult(float scale);
  float dot(const vector& vec);
  vector cross(const vector& vec);

  float angle(const vector& vec);
  float area(const vector& vec);

  bool isOrthogonal(const vector& vec);
  bool isParallel(const vector& vec);
};

    protected:

    private:
};

#endif // MYVECTOR_H
