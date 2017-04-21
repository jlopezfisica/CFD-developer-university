#include "hdf5.h"

int main() {

     hid_t file_id, dataset_id;
     herr_t status;

     file_id = H5Fopen("example.h5", H5F_ACC_RDWR, H5P_DEFAULT);
     printf("Opened file - id: %i\n", file_id);

     dataset_id = H5Dopen2(file_id, "/dset", H5P_DEFAULT);

     int dset_data[6][15];
     status = H5Dread(dataset_id, H5T_NATIVE_INT, H5S_ALL, H5S_ALL, H5P_DEFAULT, dset_data);
     printf("Position[1][2] %d\n", dset_data[1][2]);

     status = H5Fclose(file_id);

     return 0;
}
