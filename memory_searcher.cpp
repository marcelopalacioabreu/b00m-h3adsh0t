// Base address of "client.dll" (int or DWORD)
int ClientDLL = (int)GetModuleHandleA("client.dll");

// Find actual EntityBase address
EntityBase = *(int*)(ClientDLL + 0x9D3C6C); 

// Read the memory address of the EntityBase+0x23C4 to find the ID of the entity in the crosshair
int in_cross = *(int*)(EntityBase + 0x23C4); 

