#pragma once

class Fraction
{
 public:
  Fraction (double numerator, double denominator)
      :
      m_numerator(numerator),
      m_denominator(denominator)
  {

  }

  [[nodiscard]] double numerator () const
  {
    return m_numerator;
  }

  void set_numerator (double numerator)
  {
    m_numerator = numerator;
  }

  [[nodiscard]] double denominator () const
  {
    return m_denominator;
  }

  void set_denominator (double denominator)
  {
    m_denominator = denominator;
  }

 private:
  double m_numerator;

  double m_denominator;
};
