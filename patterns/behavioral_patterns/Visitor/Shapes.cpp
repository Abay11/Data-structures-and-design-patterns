#include "Shapes.h"

#pragma once

namespace shapes
{
	//concrete visitor
	struct CalcAreaVisitor : public Visitor
	{
		virtual void apply(const Circle& circle) const
		{
			cout << "Calc. Circle area equals: " << (circle.radius * circle.radius * 3.14) << endl;
		}

		virtual void apply(const Square& square) const
		{
			cout << "Calc. Square area equals: " << square.width * square.height << endl;
		}
	};

	struct CalcPerimeterVisitor : public Visitor
	{
		virtual void apply(const Circle& circle) const
		{
			cout << "Calc. Circle perimeter equals: " << (circle.radius * 2 * 3.14) << endl;
		}

		virtual void apply(const Square& square) const
		{
			cout << "Calc. Square perimeter equals: " << 2 * (square.width + square.height) << endl;
		}
	};

	void run_example()
	{
		cout << "=== START Shapes example ===" << endl;

		Circle circle;
		Square square;

		cout << "Apply CalcAreaVisitor to objects:\n";
		CalcAreaVisitor area;
		circle.apply_visitor(area);
		square.apply_visitor(area);
		
		cout << "\nApply CalcPerimeterVisitor to objects:\n";
		CalcPerimeterVisitor perim;
		circle.apply_visitor(perim);
		square.apply_visitor(perim);

		cout << "=== END Shapes example ===" << endl;
	}
}