#ifndef ABIFUNCTIONFIELD_H
#define ABIFUNCTIONFIELD_H

#include <QWidget>
#include <QStackedWidget>
#include <QComboBox>
#include <QLabel>
#include <QVector>
#include "contractabi.h"

class ABIParamsField;

/**
 * @brief The ABIFunctionField class ABI functions widget
 */
class ABIFunctionField : public QWidget
{
    Q_OBJECT
    Q_ENUMS(FunctionType)
public:
    /**
     * @brief The FunctionType enum Function type to display
     */
    enum FunctionType
    {
        Function,
        Constructor
    };

    /**
     * @brief ABIFunctionField Constructor
     * @param type Function type to display
     * @param parent Parent windows for the GUI control
     */
    ABIFunctionField(FunctionType type, QWidget *parent = 0);

    /**
     * @brief setContractABI Set the contract ABI (list of functions from the contract)
     * @param contractABI Contract ABI
     */
    void setContractABI(ContractABI *contractABI);

    /**
     * @brief getParamValue Get the value of the parameter with the id from the currently selected function
     * @param paramID Id of the input parameter
     * @return Parameter value
     */
    QString getParamValue(int paramID);

    /**
     * @brief getParamsValues Get the values of the whole list of input parameters for the selected function
     * @return Values of the parameters
     */
    QStringList getParamsValues();

    /**
     * @brief getSelectedFunction Get the ABI for the selected function from the contract
     * @return Selected function ABI
     */
    int getSelectedFunction() const;

Q_SIGNALS:

public Q_SLOTS:

private:
    /**
     * @brief updateABIFunctionField Populate the GUI control with functions
     */
    void updateABIFunctionField();

    /**
     * @brief clear Clear the GUI control
     */
    void clear();

private:
    ContractABI *m_contractABI;
    QWidget *m_func;
    QComboBox *m_comboBoxFunc;
    QLabel* m_labelFunction;
    QStackedWidget *m_paramsField;
    QVector<int> m_abiFunctionList;
    FunctionType m_functionType;
};

#endif // ABIFUNCTIONFIELD_H
