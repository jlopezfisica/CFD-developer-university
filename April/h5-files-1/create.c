#include "hdf5.h"
#define FILE "file.h5"

int main() {
    hid_t  file_id;
    herr_t status;

    file_id = H5Fcreate(FILE, H5F_ACC_TRUNC, H5P_DEFAULT, H5P_DEFAULT);

    status = H5Fclose(file_id);
}
