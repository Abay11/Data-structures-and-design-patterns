#pragma once

#include <string>
#include <iostream>

using namespace std;

namespace shapes
{
	struct Shape;
	struct Circle;
	struct Square;

	//base visitor
	struct Visitor
	{
		virtual void apply(const Shape& shape) const
		{
			cout << "Visiting Shape object... Nothing to do\n";
		}

		virtual void apply(const Circle& /*circle*/) const
		{
			cout << "Visiting Circle object... Nothing to do\n";
		}

		virtual void apply(const Square& /*square*/) const
		{
			cout << "Visiting Square object... Nothing to do\n";
		}
	};

	//Base component
	struct Shape
	{
		virtual void apply_visitor(const Visitor& visitor)
		{
			visitor.apply(*this);
		}
	};

	struct Circle : public Shape
	{
		void apply_visitor(const Visitor& visitor) override
		{
			visitor.apply(*this);
		}

		int radius = 3;
	};

	struct Square : public Shape
	{
		void apply_visitor(const Visitor& visitor) override
		{
			visitor.apply(*this);
		}

		int width = 3;
		int height = 4;
	};

	void run_example();
}