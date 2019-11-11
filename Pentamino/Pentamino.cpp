#include "Pentamino.h"

PentaminoF::PentaminoF()
{
	x.x = 0;
	x.y = 1;
	y.x = 1;
	y.y = 0;
	z.x = 1;
	z.y = 1;
	k.x = 1;
	k.y = 2;
	n.x = 2;
	n.y = 2;
	position = 0;
	NumberOfPosition = 8;
	type = 'F';
}
void PentaminoF::Turn()
{
	position++;
	position = position % 8;
	if (position == 0)
	{
		x.x = 0;
		x.y = 1;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 2;
		n.y = 2;
	}
	if (position == 1)
	{
		x.x = 0;
		x.y = 1;
		y.x = 1;
		y.y = 1;
		z.x = 1;
		z.y = 2;
		k.x = 2;
		k.y = 0;
		n.x = 2;
		n.y = 1;
	}
	if (position == 2)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 2;
		n.y = 1;
	}
	if (position == 3)
	{
		x.x = 0;
		x.y = 1;
		y.x = 0;
		y.y = 2;
		z.x = 1;
		z.y = 0;
		k.x = 1;
		k.y = 1;
		n.x = 2;
		n.y = 1;
	}
	if (position == 4)
	{
		x.x = 0;
		x.y = 2;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 2;
		n.y = 1;
	}
	if (position == 5)
	{
		x.x = 0;
		x.y = 1;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 2;
		k.y = 1;
		n.x = 2;
		n.y = 2;
	}
	if (position == 6)
	{
		x.x = 0;
		x.y = 1;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 2;
		n.y = 0;
	}
	if (position == 7)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 2;
		n.y = 1;
	}

}
PentaminoI::PentaminoI()
{
	x.x = 0;
	x.y = 0;
	y.x = 0;
	y.y = 1;
	z.x = 0;
	z.y = 2;
	k.x = 0;
	k.y = 3;
	n.x = 0;
	n.y = 4;
	position = 0;
	NumberOfPosition = 2;
	type = 'I';
}
void PentaminoI::Turn()
{
	position++;
	position = position % 2;
	if (position == 0)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 0;
		z.y = 2;
		k.x = 0;
		k.y = 3;
		n.x = 0;
		n.y = 4;
	}
	if (position == 1)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 2;
		z.y = 0;
		k.x = 3;
		k.y = 0;
		n.x = 4;
		n.y = 0;
	}

}
PentaminoL::PentaminoL()
{
	x.x = 0;
	x.y = 0;
	y.x = 0;
	y.y = 1;
	z.x = 0;
	z.y = 2;
	k.x = 0;
	k.y = 3;
	n.x = 1;
	n.y = 0;
	position = 0;
	NumberOfPosition = 8;
	type = 'L';
}

void PentaminoL::Turn()
{
	position++;
	position = position % 8;
	if (position == 0)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 0;
		z.y = 2;
		k.x = 0;
		k.y = 3;
		n.x = 1;
		n.y = 0;

	}
	if (position == 1)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 1;
		z.y = 1;
		k.x = 2;
		k.y = 1;
		n.x = 3;
		n.y = 1;
	}
	if (position == 2)
	{
		x.x = 0;
		x.y = 3;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 1;
		n.y = 3;
	}
	if (position == 3)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 2;
		z.y = 0;
		k.x = 3;
		k.y = 0;
		n.x = 3;
		n.y = 1;
	}
	if (position == 4)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 1;
		n.y = 3;
	}
	if (position == 5)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 1;
		z.y = 0;
		k.x = 2;
		k.y = 0;
		n.x = 3;
		n.y = 0;
	}
	if (position == 6)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 0;
		z.y = 2;
		k.x = 0;
		k.y = 3;
		n.x = 1;
		n.y = 3;
	}
	if (position == 7)
	{
		x.x = 0;
		x.y = 1;
		y.x = 1;
		y.y = 1;
		z.x = 2;
		z.y = 1;
		k.x = 3;
		k.y = 0;
		n.x = 3;
		n.y = 1;
	}

}

PentaminoN::PentaminoN()
{
	x.x = 0;
	x.y = 0;
	y.x = 0;
	y.y = 1;
	z.x = 1;
	z.y = 1;
	k.x = 1;
	k.y = 2;
	n.x = 1;
	n.y = 3;
	position = 0;
	type = 'N';
	NumberOfPosition = 8;
}

void PentaminoN::Turn()
{
	position++;
	position = position % 8;
	if (position == 0)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 1;
		n.y = 3;
	}
	if (position == 1)
	{
		x.x = 0;
		x.y = 1;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 2;
		k.y = 0;
		n.x = 3;
		n.y = 0;
	}
	if (position == 2)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 0;
		z.y = 2;
		k.x = 1;
		k.y = 2;
		n.x = 1;
		n.y = 3;
	}
	if (position == 3)
	{
		x.x = 0;
		x.y = 1;
		y.x = 1;
		y.y = 1;
		z.x = 2;
		z.y = 0;
		k.x = 2;
		k.y = 1;
		n.x = 3;
		n.y = 0;
	}
	if (position == 4)
	{
		x.x = 0;
		x.y = 1;
		y.x = 0;
		y.y = 2;
		z.x = 0;
		z.y = 3;
		k.x = 1;
		k.y = 0;
		n.x = 1;
		n.y = 1;
	}
	if (position == 5)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 2;
		k.y = 1;
		n.x = 3;
		n.y = 1;
	}
	if (position == 6)
	{
		x.x = 0;
		x.y = 2;
		y.x = 0;
		y.y = 3;
		z.x = 1;
		z.y = 0;
		k.x = 1;
		k.y = 1;
		n.x = 1;
		n.y = 2;
	}
	if (position == 7)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 2;
		z.y = 0;
		k.x = 2;
		k.y = 1;
		n.x = 3;
		n.y = 1;
	}

}

PentaminoP::PentaminoP()
{
	x.x = 0;
	x.y = 0;
	y.x = 0;
	y.y = 1;
	z.x = 0;
	z.y = 2;
	k.x = 1;
	k.y = 1;
	n.x = 1;
	n.y = 2;
	position = 0;
	NumberOfPosition = 8;
	type = 'P';
}


void PentaminoP::Turn()
{
	position++;
	position = position % 8;
	if (position == 0)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 0;
		z.y = 2;
		k.x = 1;
		k.y = 1;
		n.x = 1;
		n.y = 2;

	}
	if (position == 1)
	{
		x.x = 0;
		x.y = 1;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 2;
		k.y = 0;
		n.x = 2;
		n.y = 1;
	}
	if (position == 2)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 1;
		z.y = 0;
		k.x = 1;
		k.y = 1;
		n.x = 1;
		n.y = 2;
	}
	if (position == 3)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 1;
		z.y = 0;
		k.x = 1;
		k.y = 1;
		n.x = 2;
		n.y = 0;
	}
	if (position == 4)
	{
		x.x = 0;
		x.y = 1;
		y.x = 0;
		y.y = 2;
		z.x = 1;
		z.y = 0;
		k.x = 1;
		k.y = 1;
		n.x = 1;
		n.y = 2;
	}
	if (position == 5)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 2;
		k.y = 0;
		n.x = 2;
		n.y = 1;
	}
	if (position == 6)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 0;
		z.y = 2;
		k.x = 1;
		k.y = 0;
		n.x = 1;
		n.y = 1;
	}
	if (position == 7)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 1;
		z.y = 0;
		k.x = 1;
		k.y = 1;
		n.x = 2;
		n.y = 1;
	}

}

PentaminoT::PentaminoT()
{
	x.x = 0;
	x.y = 2;
	y.x = 1;
	y.y = 0;
	z.x = 1;
	z.y = 1;
	k.x = 1;
	k.y = 2;
	n.x = 2;
	n.y = 2;
	position = 0;
	NumberOfPosition = 4;
	type = 'T';
}

void PentaminoT::Turn()
{
	position++;
	position = position % 4;
	if (position == 0)
	{
		x.x = 0;
		x.y = 2;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 2;
		n.y = 2;

	}
	if (position == 1)
	{
		x.x = 0;
		x.y = 1;
		y.x = 1;
		y.y = 1;
		z.x = 2;
		z.y = 0;
		k.x = 2;
		k.y = 1;
		n.x = 2;
		n.y = 2;
	}
	if (position == 2)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 2;
		n.y = 0;
	}
	if (position == 3)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 0;
		z.y = 2;
		k.x = 1;
		k.y = 1;
		n.x = 2;
		n.y = 1;
	}

}

PentaminoU::PentaminoU()
{
	x.x = 0;
	x.y = 0;
	y.x = 0;
	y.y = 1;
	z.x = 1;
	z.y = 0;
	k.x = 2;
	k.y = 0;
	n.x = 2;
	n.y = 1;
	position = 0;
	NumberOfPosition = 4;
	type = 'U';
}

void PentaminoU::Turn()
{
	position++;
	position = position % 4;
	if (position == 0)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 1;
		z.y = 0;
		k.x = 2;
		k.y = 0;
		n.x = 2;
		n.y = 1;

	}
	if (position == 1)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 0;
		z.y = 2;
		k.x = 1;
		k.y = 0;
		n.x = 1;
		n.y = 2;
	}
	if (position == 2)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 1;
		z.y = 0;
		k.x = 2;
		k.y = 0;
		n.x = 2;
		n.y = 1;
	}
	if (position == 3)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 2;
		z.x = 1;
		z.y = 0;
		k.x = 1;
		k.y = 1;
		n.x = 1;
		n.y = 2;
	}

}

PentaminoV::PentaminoV()
{
	x.x = 0;
	x.y = 0;
	y.x = 0;
	y.y = 1;
	z.x = 0;
	z.y = 2;
	k.x = 1;
	k.y = 0;
	n.x = 2;
	n.y = 0;
	position = 0;
	NumberOfPosition = 4;
	type = 'V';
}

void PentaminoV::Turn()
{
	position++;
	position = position % 4;
	if (position == 0)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 0;
		z.y = 2;
		k.x = 1;
		k.y = 0;
		n.x = 2;
		n.y = 0;
	}
	if (position == 1)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 0;
		z.y = 2;
		k.x = 1;
		k.y = 2;
		n.x = 2;
		n.y = 2;
	}
	if (position == 2)
	{
		x.x = 0;
		x.y = 2;
		y.x = 1;
		y.y = 2;
		z.x = 2;
		z.y = 0;
		k.x = 2;
		k.y = 1;
		n.x = 2;
		n.y = 2;
	}
	if (position == 3)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 2;
		z.y = 0;
		k.x = 2;
		k.y = 1;
		n.x = 2;
		n.y = 2;
	}

}


PentaminoW::PentaminoW()
{
	x.x = 0;
	x.y = 1;
	y.x = 0;
	y.y = 2;
	z.x = 1;
	z.y = 0;
	k.x = 1;
	k.y = 1;
	n.x = 2;
	n.y = 0;
	position = 0;
	NumberOfPosition = 4;
	type = 'W';
}

void PentaminoW::Turn()
{
	position++;
	position = position % 4;
	if (position == 0)
	{
		x.x = 0;
		x.y = 1;
		y.x = 0;
		y.y = 2;
		z.x = 1;
		z.y = 0;
		k.x = 1;
		k.y = 1;
		n.x = 2;
		n.y = 0;
	}
	if (position == 1)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 2;
		n.y = 2;
	}
	if (position == 2)
	{
		x.x = 0;
		x.y = 2;
		y.x = 1;
		y.y = 1;
		z.x = 1;
		z.y = 2;
		k.x = 2;
		k.y = 0;
		n.x = 2;
		n.y = 1;
	}
	if (position == 3)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 2;
		k.y = 1;
		n.x = 2;
		n.y = 2;
	}

}

PentaminoX::PentaminoX()
{
	x.x = 0;
	x.y = 1;
	y.x = 1;
	y.y = 0;
	z.x = 1;
	z.y = 1;
	k.x = 1;
	k.y = 2;
	n.x = 2;
	n.y = 1;
	position = 0;
	NumberOfPosition = 1;
	type = 'X';
}

void PentaminoX::Turn()
{

}

PentaminoY::PentaminoY()
{
	x.x = 0;
	x.y = 2;
	y.x = 1;
	y.y = 0;
	z.x = 1;
	z.y = 1;
	k.x = 1;
	k.y = 2;
	n.x = 1;
	n.y = 3;
	position = 0;
	NumberOfPosition = 8;
	type = 'Y';
}

void PentaminoY::Turn()
{
	position++;
	position = position % 8;
	if (position == 0)
	{
		x.x = 0;
		x.y = 2;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 1;
		n.y = 3;
	}
	if (position == 1)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 2;
		z.y = 0;
		k.x = 2;
		k.y = 1;
		n.x = 3;
		n.y = 0;
	}
	if (position == 2)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 0;
		z.y = 2;
		k.x = 0;
		k.y = 3;
		n.x = 1;
		n.y = 1;
	}
	if (position == 3)
	{
		x.x = 0;
		x.y = 1;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 2;
		k.y = 1;
		n.x = 3;
		n.y = 1;
	}
	if (position == 4)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 0;
		z.y = 2;
		k.x = 0;
		k.y = 3;
		n.x = 1;
		n.y = 2;
	}
	if (position == 5)
	{
		x.x = 0;
		x.y = 1;
		y.x = 1;
		y.y = 1;
		z.x = 2;
		z.y = 0;
		k.x = 2;
		k.y = 1;
		n.x = 3;
		n.y = 1;
	}
	if (position == 6)
	{
		x.x = 0;
		x.y = 1;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 1;
		n.y = 3;
	}
	if (position == 7)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 2;
		k.y = 0;
		n.x = 3;
		n.y = 0;
	}

}

PentaminoZ::PentaminoZ()
{
	x.x = 0;
	x.y = 2;
	y.x = 1;
	y.y = 0;
	z.x = 1;
	z.y = 1;
	k.x = 1;
	k.y = 2;
	n.x = 2;
	n.y = 0;
	position = 0;
	NumberOfPosition = 4;
	type = 'Z';
}

void PentaminoZ::Turn()
{
	position++;
	position = position % 4;
	if (position == 0)
	{
		x.x = 0;
		x.y = 2;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 2;
		n.y = 0;
	}
	if (position == 1)
	{
		x.x = 0;
		x.y = 0;
		y.x = 0;
		y.y = 1;
		z.x = 1;
		z.y = 1;
		k.x = 2;
		k.y = 1;
		n.x = 2;
		n.y = 2;
	}
	if (position == 2)
	{
		x.x = 0;
		x.y = 0;
		y.x = 1;
		y.y = 0;
		z.x = 1;
		z.y = 1;
		k.x = 1;
		k.y = 2;
		n.x = 2;
		n.y = 2;
	}
	if (position == 3)
	{
		x.x = 0;
		x.y = 1;
		y.x = 0;
		y.y = 2;
		z.x = 1;
		z.y = 1;
		k.x = 2;
		k.y = 0;
		n.x = 2;
		n.y = 1;
	}



}

